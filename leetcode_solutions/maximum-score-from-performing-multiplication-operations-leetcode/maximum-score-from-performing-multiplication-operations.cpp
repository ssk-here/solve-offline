#include <iostream>
#include <climits>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
public:
    int m,n;
    int maxScore;
    vector<int> nums,multipliers;
    
    int CalcScore(int curp,int curn,vector<vector<int>> &DP)
    {
        int depth = curp + (n-1-curn);
        if(depth == m)
        {
            return 0;
        } 
        int l = multipliers[depth]*nums[curp] + CalcScore(curp+1,curn,DP);
        int r = multipliers[depth]*nums[curn] + CalcScore(curp,curn-1,DP);
        DP[curp][n-1-curn] = max(l,r);
        return DP[curp][n-1-curn];
    }
    //at any given level if extreme left, depth == curp and curn =0
    //if extreme right, depth = (n - curn) and curp =0
    // curp + (n - 1 - curn) -> depth

    int maximumScore(vector<int>& nums, vector<int>& multipliers)
    {
        
        m = multipliers.size();
        n = nums.size();
        this->nums = nums;
        this->multipliers = multipliers;
        vector<vector<int>> DP ( m,vector<int>(m,INT_MIN) );
        return CalcScore(0,n-1,DP);
        
    }
};
int main() {
    // Your code goes here
    Solution S;
    vector<int> nums = {-5,-3,-3,-2,7,1};
    vector<int> mult = {-10,-5,3,4,6};
    int m = S.maximumScore(nums,mult);
    P.print(m,"Result");

    return 0;
}
