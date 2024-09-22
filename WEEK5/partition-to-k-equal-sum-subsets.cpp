
/**
* @file partition-to-k-equal-sum-subsets.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/partition-to-k-equal-sum-subsets
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5" "partition-to-k-equal-sum-subsets"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int n,k,subsum;
    bool check(vector<int> &nums,vector<bool> taken,int &count,int cursum){
        if(cursum == subsum){
            if(count == k-1)
                return true;
            count++;
            cursum = 0;
        }
        for(int i=0;i<n;i++)
        {
            if(!taken[i]){
                taken[i] = true;
                
            }
        }
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum =0;
        n = nums.size();
        this->k=k;
        for(int &n:nums)
            sum+=n;
        if(sum<k || sum%k!=0)
            return false;
        int subsum=sum/k;
        //recursion 
        vector<bool> taken(n,false);
        int count=0;
        return check(nums,taken,count,subsum);
    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {
	Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    