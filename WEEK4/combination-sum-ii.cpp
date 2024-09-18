
/**
* @file combination-sum-ii.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/combination-sum-ii
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK4\combination-sum-ii"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
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
    