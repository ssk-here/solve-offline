Sairam

This is a repository to solve problems offline.

Sample Usage on Windows11 Terminal
1.Edit the WEEK3 binary-tree-paths.cpp file with your solution
2.Use the below test function for testing
3 Run on terminal or Powershell
.\build.bat "WEEK3\binary-tree-paths"
4. Incase of errors, read the comments in build.bat file
5. The sample inputs are present in the input file. Check the output in ./WEEK3/binary-tree-paths_output.txt


Sample Test function for ./WEEK3/binary-tree-paths_output.cpp

void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Solution solution;
    Output Op;

    std::vector<std::string> V = Ip.readInputFile(inputfile);
    std::vector<std::string> Output;
    for (auto &input : V) {
        TreeNode* root = Ip.buildTree(input);
        std::vector<std::string> paths = solution.binaryTreePaths(root);
        Op.appendInput(input);
        for (auto p : paths)
            Op.appendOutput(p);
    }

    Op.writeOutputFile(outputfile);
}


Understanding the build.bat file 

The batch file deletes the contents of the output file and runs the below commands
del ./WEEK3/binary-tree-paths.exe                                               
make MAINFILE=./WEEK3/binary-tree-paths                                         
g++ -Iinclude -Wall -g -o WEEK3/binary-tree-paths.exe WEEK3/binary-tree-paths.cpp
./WEEK3/binary-tree-paths.exe ./WEEK3/binary-tree-paths_input.txt ./WEEK3/binary-tree-paths_output.txt

Sample output on terminal is

.\build.bat "WEEK3\binary-tree-paths"
EXEFILE=WEEK3\binary-tree-paths.exe
CPPFILE=WEEK3\binary-tree-paths.cpp
INPUTFILE=WEEK3\binary-tree-paths_input.txt
OUTPUTFILE=WEEK3\binary-tree-paths_output.txt
Deleting contents of WEEK3\binary-tree-paths_output.txt
g++ -Iinclude -Wall -g -o WEEK3\binary-tree-paths.exe WEEK3\binary-tree-paths.cpp
BUILD Successful. Running WEEK3\binary-tree-paths.exe
Complete. Check WEEK3\binary-tree-paths_output.txt
Displaying contents of WEEK3\binary-tree-paths_output.txt
1.Input:[1,2,3,null,5]
1->2->5
1->3
2.Input:[1]
1
-------------------------------------------------





