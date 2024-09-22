
/**
* @file product-of-array-except-self.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/product-of-array-except-self
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK3" "product-of-array-except-self"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0]  = 1;
        for(int i=1;i<n;i++)
            res[i] = res[i-1]*nums[i-1];
        int prod = nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            res[i] = res[i]*prod;
            prod = prod*nums[i];
        }
        return res;
    }
};
//reads vector and writes vector
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Solution solution;
    Output Op;

    std::vector<std::string> V = Ip.readInputFile(inputfile);
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for (auto &input : V) {
        Vin = Ip.buildVector(input);
        Vin1=Vin;//pass by reference changes Vin
        Vout = solution.productExceptSelf(Vin);
        Op.appendInput(Vin1);
        Op.appendOutput(Vout);
    }

    Op.writeOutputFile(outputfile);
}

int main(int argc, char* argv[]) {
	Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    