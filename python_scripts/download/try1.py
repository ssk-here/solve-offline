import requests
import json
from types import SimpleNamespace
import os
import sys
import pdfkit
import shutil
from bs4 import BeautifulSoup
# Function to get the CSRF token from the LeetCode page
def get_csrf_token(session):
    url = "https://leetcode.com"
    response = session.get(url)
    with open('response_content.html', 'wb') as file:
        file.write(response.content)
    soup = BeautifulSoup(response.content, 'html.parser')
    # Find all tags in the soup
    all_tags = soup.find_all()

    # Print the tag names
    for tag in all_tags:
        print(tag.name)
    token_meta = soup.find('meta', {'name': 'csrf-token'})
    if token_meta:
        return token_meta['content']
    else:
        raise ValueError("Unable to find CSRF token")

# Function to download solutions
def download_solutions(username, password):
    login_url = "https://leetcode.com/accounts/login/"
    submissions_url = "https://leetcode.com/api/submissions/"
    
    with requests.Session() as session:
        # Get CSRF token
        csrf_token = get_csrf_token(session)
        
        # Login payload
        payload = {
            'login': username,
            'password': password,
            'csrfmiddlewaretoken': csrf_token
        }
        
        # Headers
        headers = {
            'Referer': login_url,
            'User-Agent': 'Mozilla/5.0'
        }
        
        # Login
        session.post(login_url, data=payload, headers=headers)
        
        # Get submissions
        response = session.get(submissions_url, headers=headers)
        submissions = response.json()['submissions_dump']
        
        # Create a directory to save solutions
        if not os.path.exists('leetcode_solutions'):
            os.makedirs('leetcode_solutions')
        
        # Save each solution
        for submission in submissions:
            title = submission['title']
            code = submission['code']
            lang = submission['lang']
            filename = f"leetcode_solutions/{title}.{lang}"
            with open(filename, 'w') as file:
                file.write(code)

# Replace 'your_username' and 'your_password' with your LeetCode credentials
download_solutions('ssk-here', 'codefast10!')