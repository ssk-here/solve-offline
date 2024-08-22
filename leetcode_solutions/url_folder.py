import os
import urllib.parse
import argparse

def create_folder_and_file(url):
    # Parse the URL to extract the path
    parsed_url = urllib.parse.urlparse(url)
    path = parsed_url.path

    # Split the path to get the segments between slashes
    segments = path.strip('/').split('/')

    # Get the last segment (the one we are interested in)
    folder_name = segments[-1] if segments else 'default_folder_name'
    file_name = folder_name + '.cpp'
    folder_name += "-leetcode"

    # Create the folder if it does not exist
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
        print(f"Folder created: {folder_name}")

    # Define the path for the solution.cpp file
    cpp_file_path = os.path.join(folder_name, file_name)

    # Create the solution.cpp file with a basic template
    cpp_content = """#include <iostream>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
public:
    //function here
    {
        
    }
};
int main() {
    // Your code goes here
    Solution S;

    return 0;
}
"""

    with open(cpp_file_path, 'w') as file:
        file.write(cpp_content)
        print(f"File created: {cpp_file_path}")
    print("edit makefile with folder name SOLUTIONS_DIR = folder-name")
    return folder_name

def modify_solutionfolder_makefile(makefile_path,folder_name):
    with open(makefile_path) as f:
        L = f.readlines()
    for i in range(0,len(L)):
        s = L[i]
        if s.find("SOLUTIONS_DIR = ") != -1:
            s = "SOLUTIONS_DIR = " + folder_name + "\n"
            L[i] = s
            break
    with open(makefile_path,'w') as f:
        f.writelines(L)

    
    
    
def main():
    # Set up argument parsing
    parser = argparse.ArgumentParser(description="Create a folder and a solution.cpp file from a URL.")
    parser.add_argument('url', type=str, help='The URL to process')
    
    args = parser.parse_args()
    
    folder_name = create_folder_and_file(args.url)

    modify_solutionfolder_makefile("./Makefile",folder_name)
    

if __name__ == "__main__":
    main()
