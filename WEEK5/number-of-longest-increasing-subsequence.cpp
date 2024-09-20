
/**
* @file number-of-longest-increasing-subsequence.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/number-of-longest-increasing-subsequence
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5\number-of-longest-increasing-subsequence"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        return 2;
    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    int res;
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for(size_t i=0; i<V.size(); i++) {  
        Vin = Ip.buildVector(V[i]);
        Vin1=Vin;//pass by reference changes Vin
        Solution solution;//need new object for each test case
        res = solution.findNumberOfLIS(Vin);
        Op.appendInput(Vin1);
        Op.appendOutput(res);
    }

    Op.writeOutputFile(outputfile);
}

int main(int argc, char* argv[]) {
	Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    