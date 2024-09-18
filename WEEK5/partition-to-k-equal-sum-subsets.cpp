
/**
* @file partition-to-k-equal-sum-subsets.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/partition-to-k-equal-sum-subsets
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5\partition-to-k-equal-sum-subsets"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
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
    