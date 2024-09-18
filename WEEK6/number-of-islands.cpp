
/**
* @file number-of-islands.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/number-of-islands
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK6\number-of-islands"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <inputfile> <outputfile>" << std::endl;
    return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile) {
    std::cerr << "Could not open input file." << std::endl;
    return 1;
    }

    std::ofstream outfile(argv[2]);
    if (!outfile) {
    std::cerr << "Could not open output file." << std::endl;
    return 1;
    }

    Test(argv[1], argv[2]);

    return 0;
}
    