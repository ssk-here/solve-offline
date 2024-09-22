import requests
from bs4 import BeautifulSoup
import os

# import os
# folder_name="SEAN_PRASAD"
# for file_name in os.listdir(folder_name):
#     if file_name.endswith('.txt') and not file_name.startswith('data'):
#         file_path = os.path.join(folder_name, file_name)
#         #print(file_path)
#         os.remove(file_path)

all_urls = []
with open('all_url.txt', 'r') as file:
    for line in file:
        if line.startswith('http'):
            all_urls.append(line.strip())

with open('Sean_Prasad.txt', 'r') as file:
    for line in file:
        if line.startswith('http') and line.strip() not in all_urls:
            with open('sean_prasad_extra.txt', 'a') as extra_file:
                extra_file.write(line)



