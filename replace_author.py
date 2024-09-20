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

def insert_ignored_line(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()

        updated_lines = []
        skip_lines = False
        skip_count = 0

        for line in lines:
            if "int main(" in line:
                skip_lines = True
                skip_count = 16
                updated_lines.append(line)
                continue

            if skip_lines:
                if skip_count > 0:
                    skip_count -= 1
                    continue
                else:
                    updated_lines.append("\tCommon().parseArguments(argc,argv);\n")
                    skip_lines = False

            updated_lines.append(line)

        with open(file_path, 'w') as file:
            file.writelines(updated_lines)

        print(f"Inserted 'Ignored' in {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")

if __name__ == "__main__":
    for i in range(1,11):
        target_directory = "./WEEK" + str(i)
        for root, _, files in os.walk(target_directory):
            for filename in files:
                if filename.lower().endswith('.cpp'):
                    file_path = os.path.join(root, filename)
                    insert_ignored_line(file_path)

    # target_directory = "./WEEK7"  # Replace with the actual folder path
    # process_directory(target_directory)
    
    # target_directory = "./WEEK2"  # Replace with the actual folder path
    # process_directory(target_directory)

    # target_directory = "./WEEK8"  # Replace with the actual folder path
    # process_directory(target_directory)

    # target_directory = "./WEEK9"  # Replace with the actual folder path
    # process_directory(target_directory)

    # target_directory = "./WEEK10"  # Replace with the actual folder path
    # process_directory(target_directory)
    print("Replacement completed for all .cpp files.")
