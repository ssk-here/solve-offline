
/**
* @file top-k-frequent-elements.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/top-k-frequent-elements
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK8" "top-k-frequent-elements"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x=5;
        int y=10;
        cout<< x<<y;
        x+=10;
        cout<< x<<y;
        return nums;
    }
};
// reads vector and int
// writes int
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    vector<int> res;
    int target;
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for(size_t i=0; i<V.size(); i+=2) {  
        Vin = Ip.buildVector(V[i]);
        target = Ip.readInt(V[i+1]);
        Vin1=Vin;//pass by reference changes Vin
        Solution solution;//need new object for each test case
        res = solution.topKFrequent(Vin,target);
        Op.appendInput(Vin1,target);
        Op.appendOutput(res);
    }

    Op.writeOutputFile(outputfile);
}

int main(int argc, char* argv[]) {
	Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    