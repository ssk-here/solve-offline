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

        # Find the third line starting with "* @file"
        for i, line in enumerate(lines):
            if line.strip().startswith('* @file'):
                # Extract the filename (e.g., "binary-tree-paths.cpp")
                filename = line.strip().split()[-1]
                break
        else:
            print(f"Warning: No '* @file' line found in {file_path}")
            return

        # Add the desired content at the tenth line
        lines[9] = f'*  Build using .\\build.bat "{foldername+filename[:-4]}"\n'

        # Write the updated content back to the file
        with open(file_path, 'w') as outfile:
            outfile.writelines(lines)

        print(f"Updated {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")

if __name__ == "__main__":
    target_folder = "./WEEK3"  # Replace with the actual folder path
    process_cpp_files(target_folder)
    target_folder = "./WEEK4"  # Replace with the actual folder path
    process_cpp_files(target_folder)
    target_folder = "./WEEK5"  # Replace with the actual folder path
    process_cpp_files(target_folder)
    target_folder = "./WEEK6"  # Replace with the actual folder path
    process_cpp_files(target_folder)
    print("Content added to the specified lines in all .cpp files.")
