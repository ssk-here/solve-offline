import os

def split_urls(input_file, output_prefix, max_urls_per_file):
    with open(input_file, 'r') as f:
        urls = f.readlines()

    num_files = (len(urls) - 1) // max_urls_per_file + 1
    for i in range(num_files):
        start_idx = i * max_urls_per_file
        end_idx = min((i + 1) * max_urls_per_file, len(urls))
        output_file = f"{output_prefix}{i+1}.txt"
        with open(output_file, 'w') as f:
            f.writelines(urls[start_idx:end_idx])

# Example usage:
input_file = "solved_urls.txt"
output_prefix = "solved"
max_urls_per_file = 20
split_urls(input_file, output_prefix, max_urls_per_file)