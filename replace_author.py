import os

def replace_author_string(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()

        # Replace the target string in each line
        updated_lines = []
        for line in lines:
            updated_line = line.replace('* @author [Your Name]', '* @author Srikanth S')
            updated_lines.append(updated_line)

        # Write the updated content back to the file
        with open(file_path, 'w') as file:
            file.writelines(updated_lines)

        print(f"Updated {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")

def process_directory(directory_path):
    for root, _, files in os.walk(directory_path):
        for filename in files:
            if filename.lower().endswith('.cpp'):
                file_path = os.path.join(root, filename)
                replace_author_string(file_path)

if __name__ == "__main__":
    target_directory = "./WEEK4"  # Replace with the actual folder path
    process_directory(target_directory)
    
    target_directory = "./WEEK5"  # Replace with the actual folder path
    process_directory(target_directory)

    target_directory = "./WEEK6"  # Replace with the actual folder path
    process_directory(target_directory)
    print("Replacement completed for all .cpp files.")
