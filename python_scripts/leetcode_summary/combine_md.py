import os
import subprocess

def combine_md_to_pdf(folder_path, output_pdf):
    md_files = [f'short_solved{i}.md' for i in range(1, 22)]
    # Create a temporary markdown file to combine all content
    combined_md_path = os.path.join(folder_path, 'short_combined.md')
    with open(combined_md_path, 'w', encoding='utf-8') as combined_md:
        for md_file in md_files:
            with open(os.path.join(folder_path, md_file), 'r', encoding='utf-8') as f:
                combined_md.write(f.read())
                combined_md.write('\n\n')  # Add some space between files

    # Convert the combined markdown file to PDF using markdown-pdf
    subprocess.run(['markdown-pdf', combined_md_path, '-o', output_pdf])

    # Clean up the temporary combined markdown file
    os.remove(combined_md_path)

if __name__ == "__main__":
    folder_path = 'C:/Users/ssk95/Desktop/git/solve-offline/python_scripts/leetcode_summary'
    output_pdf = os.path.join(folder_path, 'solved.pdf')
    combine_md_to_pdf(folder_path, output_pdf)