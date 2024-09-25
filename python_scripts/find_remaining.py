solved_file='solved_urls.txt'
neet_file='Sean_Prasad.txt'

def get_unique_urls(neet_file, solved_file):
    # Read the contents of the files
    with open(neet_file, 'r') as neet_f:
        neet_urls = set(neet_f.read().splitlines())
    with open(solved_file, 'r') as solved_f:
        solved_urls = set(solved_f.read().splitlines())

    # Find the unique URLs
    unique_urls = neet_urls - solved_urls

    return list(unique_urls)

# Usage
unique_urls_list = get_unique_urls(neet_file, solved_file)

# Print the unique URLs
for url in unique_urls_list:
    print(url)
