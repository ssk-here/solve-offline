import os
import shutil

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

#inserts code into main()
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

#copies all .txt files to data folder
def copy_txt_files(folder_name):
  """Copies all .txt files from a given folder to a subfolder named 'data'.

  Args:
    folder_name: The name of the folder containing the .txt files.
  """

  # Create the 'data' subfolder if it doesn't exist
  data_folder = os.path.join(folder_name, 'data')
  if not os.path.exists(data_folder):
    os.makedirs(data_folder)

  # Iterate through all files in the given folder
  for file_name in os.listdir(folder_name):
    if file_name.endswith('.txt'):
      source_path = os.path.join(folder_name, file_name)
      destination_path = os.path.join(data_folder, file_name)
      shutil.copy(source_path, destination_path)


def delete_original_txt_files(folder_name):
  """Deletes all original .txt files from a given folder, but does not touch files in the 'data' subfolder.

  Args:
    folder_name: The name of the folder containing the .txt files.
  """

  # Iterate through all files in the given folder
  for file_name in os.listdir(folder_name):
    if file_name.endswith('.txt') and not file_name.startswith('data'):
      file_path = os.path.join(folder_name, file_name)
      #print(file_path)
      os.remove(file_path)

def replace_build_rule(folder_to_process):
    FILES = []
    for root, _, files in os.walk(folder_to_process):
        for filename in files:
            if filename.lower().endswith('.cpp'):
                file_path = os.path.join(root, filename)
                FILES.append(file_path)
    for file in FILES:
        with open(file,'r') as f:
            lines = f.readlines()
        for index, line in enumerate(lines):
            if '.\\build.bat' in line:
                print(line)  # Print the original line
                lines[index] = line[::-1].replace('\\', '" "', 1)[::-1]
                print(lines[index])  # Print the modified line
                break
        with open(file, 'w') as f:
            f.writelines(lines)

if __name__ == "__main__":
    pass
    # for i in range(1,11):
    #     folder_to_process = "./WEEK" + str(i)
    #     replace_build_rule(folder_to_process)
        #delete_original_txt_files(folder_to_process)
    # for i in range(1,11):
    #     folder_to_process = "./WEEK" + str(i)
    #     copy_txt_files(folder_to_process)
    # 
    # for i in range(1,11):
    #     target_directory = "./WEEK" + str(i)
    #     for root, _, files in os.walk(target_directory):
    #         for filename in files:
    #             if filename.lower().endswith('.cpp'):
    #                 file_path = os.path.join(root, filename)
    #                 insert_ignored_line(file_path)

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
    #print("Replacement completed for all .cpp files.")
