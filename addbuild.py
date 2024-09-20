import os

def process_cpp_files(folder_path):
    for root, _, files in os.walk(folder_path):
        for filename in files:
            if filename.lower().endswith('.cpp'):
                file_path = os.path.join(root, filename)
                process_single_cpp_file(folder_path,file_path)

def process_single_cpp_file(foldername,file_path):
    foldername = foldername[2:] + "\\"
    try:
        with open(file_path, 'r') as infile:
            lines = infile.readlines()

        # Extract the filename (e.g., "binary-tree-paths.cpp")
        filename = os.path.basename(file_path)
        # Find the line containing "Space Complexity" and insert the build.bat line after it
        for i, line in enumerate(lines):
            if "* Space Complexity:" in line:
            # Insert the build.bat line after the line containing "Space Complexity"
                lines.insert(i + 1, f'* Build using .\\build.bat "{foldername + filename[:-4]}"\n')
                break

        # Write the updated content back to the file
        with open(file_path, 'w') as outfile:
            outfile.writelines(lines)

        print(f"Updated {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")

if __name__ == "__main__":
    target_folder = "./WEEK7"  # Replace with the actual folder path
    process_cpp_files(target_folder)
    # target_folder = "./WEEK2"  # Replace with the actual folder path
    # process_cpp_files(target_folder)
    # target_folder = "./WEEK8"  # Replace with the actual folder path
    # process_cpp_files(target_folder)
    # target_folder = "./WEEK9"  # Replace with the actual folder path
    # process_cpp_files(target_folder)
    # target_folder = "./WEEK10"  # Replace with the actual folder path
    # process_cpp_files(target_folder)
    print("Content added to the specified lines in all .cpp files.")
