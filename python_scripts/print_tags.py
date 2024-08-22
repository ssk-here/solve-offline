import sys
import requests
from bs4 import BeautifulSoup
import pdfkit

def fetch_html_content(url):
    try:
        response = requests.get(url)
        response.raise_for_status()
        return response.text
    except requests.exceptions.RequestException as e:
        print(f"Error fetching content from {url}: {e}")
        sys.exit(1)

def print_all_div_tags(html_content):
    soup = BeautifulSoup(html_content, 'html.parser')
    div_tags = soup.find_all('div')
    
    for index, div_tag in enumerate(div_tags, start=1):
        print(f"Div Tag {index}: {div_tag}")
        print("-----------------------------------------------------")

def main():
    if len(sys.argv) != 2:
        print("Usage: python script.py <url>")
        sys.exit(1)

    url = sys.argv[1]
    
    html_content = fetch_html_content(url)
    print_all_div_tags(html_content)

if __name__ == "__main__":
    main()

