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

def extract_content(html_content):
    soup = BeautifulSoup(html_content, 'html.parser')
    # Find the specific div tag with data-track-load="description_content"
    description_div = soup.find('div', {'data-track-load': 'description_content'})
    
    if description_div:
        extracted_content = description_div.get_text("\n", strip=True)
        return extracted_content
    else:
        print("Unable to find the specified div tag.")
        sys.exit(1)

def save_to_pdf(content):
    pdfkit.from_string(content, 'result.pdf')

def main():
    if len(sys.argv) != 2:
        print("Usage: python script.py <url>")
        sys.exit(1)

    url = sys.argv[1]
    
    html_content = fetch_html_content(url)
    extracted_content = extract_content(html_content)
    save_to_pdf(extracted_content)

    print(f"PDF file 'result.pdf' has been created.")

if __name__ == "__main__":
    main()
