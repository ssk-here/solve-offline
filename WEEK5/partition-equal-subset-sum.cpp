
/**
* @file partition-equal-subset-sum.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/partition-equal-subset-sum
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5" "partition-equal-subset-sum"
*/
#include <allheaders.h>
#include <chrono>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if(n<2)
            return false;
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
            return false;
        sum /= 2;
        sort(nums.begin(),nums.end());
        vector<bool> dp(sum+1,false);
        //dp[i][a] = dp[i-1][a] || dp[i-1][a-nums[i]] ; a from nums[i] to target.all a for a < nums[i] has already been calculated
        dp[0] = true; //important if a = nums[i] dp[a-nums[i]]=dp[0]=true
        dp[nums[0]] =true;
        for(int i=1;i<n;i++){
            //need to go from reverse as we dont want the element 2*nums[i] to be true
            for(int a=sum;a>=nums[i];a--){
                dp[a] = dp[a] || dp[a-nums[i]];
            }
            if(dp[sum])
                return true;
        }
        return false;
    }
};


class Solution1 {
public:
struct pair_hash{
        std::size_t operator()(pair<int,int> P) const{
            size_t h = (P.first<<10) + P.second;
            return h;
        }
    };
    unordered_map<pair<int,int>,bool,pair_hash> M;
    bool check(vector<int> &nums,int index,int target,vector<int> &psum){
        if(target <=0 || index==nums.size() || target > psum[index])
            return false;
        if(target == nums[index])
            return true;
        if(M.find({index,target}) != M.end())
            return M[{index,target}];
        index++;
        M[{index,target}] = check(nums,index,target,psum) || check(nums,index,target-nums[index-1],psum);
        return M[{index,target}];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return false;
        sort(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum&1)
            return false;
        vector<int> psum(n);
        psum[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--)
            psum[i] = psum[i+1] + nums[i];
        return check(nums,0,sum/2,psum);
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
        auto start = std::chrono::high_resolution_clock::now();
        res = solution.canPartition(Vin);
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
        std::cout << "Time taken: " << elapsed.count() << " nanoseconds" << std::endl;
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
    