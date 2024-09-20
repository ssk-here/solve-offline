
/**
* @file partition-equal-subset-sum.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/partition-equal-subset-sum
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5\partition-equal-subset-sum"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return false;
        sort(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum&1)
            return false;
        
        return true;
    }
};
// reads vector
// writes bool
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    bool res;
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for(size_t i=0; i<V.size(); i++) {  
        Vin = Ip.buildVector(V[i]);
        Vin1=Vin;//pass by reference changes Vin
        Solution solution;//need new object for each test case
        res = solution.canPartition(Vin);
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
    