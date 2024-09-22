import os
strMain = """
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    """


def create_test_files(title,foldername):
    # Define the paths
    base_dir = os.path.join(foldername)
    cpp_file = os.path.join(base_dir, f'{title}.cpp')
    data_dir = os.path.join(base_dir, 'data')
    input_file = os.path.join(data_dir, f'{title}_input.txt')
    output_file = os.path.join(data_dir, f'{title}_output.txt')

    # Create directories if they don't exist
    os.makedirs(data_dir, exist_ok=True)
    global strMain
    header = f"""
/**
* @file {title}.cpp
* @author Srikanth S
* @date [Current Date]
* @see 
* @brief   
* Build using .\\build.bat {foldername} {title}
*/
#include <allheaders.h>
using namespace std;
"""

    # Write the header and strMain to the cpp file
    with open(cpp_file, 'w') as f:
        f.write(header)
        f.write(strMain)
    # Create the files
    open(input_file, 'w').close()
    open(output_file, 'w').close()
    

    print(f'Created {cpp_file}, {input_file}, and {output_file}')


def reverse(s):
    n = len(s)
    t = s[::-1]
    return t

if __name__ == "__main__":
    title = input("Enter the title: ")
    foldername="test"
    create_test_files(title,foldername)
