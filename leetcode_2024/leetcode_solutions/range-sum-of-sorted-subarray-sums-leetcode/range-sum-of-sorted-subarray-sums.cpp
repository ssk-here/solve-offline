#include <iostream>
#include <algorithm>
#include <math.h>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod_val = std::pow(10,9) + 7;
        vector<int> allsums(n*(n+1)/2,0);
        int cur = 0,cursum = 0;
        for(int i=0;i<n;i++)
        for(int j=i,cursum=0;j<n;j++)
        {
            cursum += nums[j];
            allsums[cur++] = cursum;
        }
        sort(allsums.begin(),allsums.end());
        P.print(allsums,"allsums");
        P.print(mod_val,"mod_val");
        cursum=0;
        for(int cur=left-1;cur<right;cur++)
        {
            cursum = ((allsums[cur] % mod_val) +  cursum)%mod_val;
             P.print(cursum,"cursum");
            
        }
        return cursum;
    }
};
int main() {
    // Your code goes here
    Solution S;vector<int> nums{1,2,3,4};
    S.rangeSum(nums,4,1,5);
    return 0;
}
