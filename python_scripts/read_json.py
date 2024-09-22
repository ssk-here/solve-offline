import json

def read_and_print_titles(json_file):
    slugs=[]
    with open(json_file, 'r') as file:
        json_data = json.load(file)
        for item in json_data['data']:
            title_slug = item['slug']
            slugs.append(title_slug)
    return slugs

if __name__ == "__main__":
    slugs = read_and_print_titles('sean_prasad.json')
    URLS = ["https://leetcode.com/problems/" + slug for slug in slugs]
    with open('Sean_Prasad.txt', 'w') as output_file:
        for url in URLS:
            output_file.write(url + '\n')
