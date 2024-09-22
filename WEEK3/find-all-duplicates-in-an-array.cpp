
/**
* @file find-all-duplicates-in-an-array.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/find-all-duplicates-in-an-array
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK3" "find-all-duplicates-in-an-array"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        //nums is in range [1,n]. Set index to negative if val appears
        vector<int> ans;
        for(int i=0,index;i<n;i++){
            index = abs(nums[i]) - 1;
            if(nums[index] < 0)
                ans.push_back(index+1);
            else
                nums[index] = -nums[index];
        }
        return ans;
    }
};
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
        Vout = solution.findDuplicates(Vin);
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
    