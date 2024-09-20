
/**
* @file combination-sum-iv.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/combination-sum-iv
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5\combination-sum-iv"
* Notes //choose nums[0] in the first place
        //find different ways to get target - nums[0] from nums
        //if target < min, return 0.
        //if target == min return 1.
        //M[val] is number of different ways to get val from nums
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    unordered_map<int,int> M;
    int calc_combinations(vector<int> &nums,int target){
        if(M.find(target) != M.end())
            return M[target];
        int ans =0;
        for(int &n : nums){
            if(n < target)
                ans += calc_combinations(nums,target-n);
            else if(n == target)//important -if we remove this, we dont get many combinations
                ans += 1;
            else
                break;    
        }
        M[target] = ans;
        return ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        M[0]=1;
        M[nums[0]] = 1;
        int ans = calc_combinations(nums,target);
        for (const auto& pair : M) {
            cout << "M[" << pair.first << "] = " << pair.second << endl;
        }
        cout<<"DONE\n";
        return ans;
    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    int target,res;
    std::vector<std::string> Output;
    std::vector<int> Vin,Vin1,Vout;
    for(size_t i=0; i<V.size(); i+=2) {  
        Vin = Ip.buildVector(V[i]);
        target = Ip.readInt(V[i+1]);
        Vin1=Vin;//pass by reference changes Vin
        Solution solution;//need new object for each test case
        res = solution.combinationSum4(Vin,target);
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
    