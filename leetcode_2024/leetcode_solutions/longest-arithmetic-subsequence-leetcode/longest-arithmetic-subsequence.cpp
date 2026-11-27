#include <iostream>
#include <map>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
public:
    class R{
        public:
        std::map<int,int> M; //key is distance d.length of longest seq with d
        R(int d,int l) 
        {
            M[d] = l;
        }
    };
    int longestArithSeqLength(vector<int>& nums) {
        int n =nums.size();
        vector<R> dp(n,R(0,1));
        int res =1,d,temp;
        for(int i=1;i<n;i++)
        {
            //P.print(i,"i");
            //P.print(nums[i],"numsi");
            for(int j =i-1;j>=0;j--)
            {
                d = nums[i] - nums[j];
                if(nums[i] == 31)
                {
                    P.print(nums[j],"numsj0");
                    P.print(d,"d0");
                }
                if(dp[j].M.find(d) != dp[j].M.end())
                {
                    if(d==4 && (nums[i] ==31 || nums[i] == 35) )
                    {
                       
                        P.print(nums[j],"numsj");
                        P.print(d,"d");
                        P.print(dp[j].M[d],"Mjd");
                    }
                    temp = dp[j].M[d] + 1;
                    if( temp > res)
                        res = temp;
                    if(d==4  && dp[i].M.find(d) == dp[i].M.end())
                    {
                        P.print()
                    }
                    if(dp[i].M.find(d) == dp[i].M.end() || temp > dp[i].M[d])
                    dp[i].M[d] = temp;
                    if(d==4 && (nums[i] ==31 || nums[i] == 35) )
                    {
                        
                        //P.print(i,"i");
                        //P.print(nums[i],"nums i");
                        P.print(temp,"temp");
                        P.print(dp[i].M[d],"Mid");
                        P.print(res,"res");

                    }
                }
                else
                    dp[i].M[d] = 2; //this is error . check if d is present before modifying it.
            }
        }
        return res;
        
        
    }
};
int main() {
    // Your code goes here
    Solution S;
    vector<int> nums = {3,6,9,12,12,12,12,12};
    vector<int> nums1 = {22,8,57,41,36,46,42,28,42,14,9,43,27,51,0,0,38,50,31,60,29,31,20,23,37,53,27,1,47,42,28,31,10,35,39,12,15,6,35,31,45,21,30,19,5,5,4,18,38,51,10,7,20,38,28,53,15,55,60,56,43,48,34,53,54,55,14,9,56,52};
    int res=S.longestArithSeqLength(nums1);
    P.print(res,"res");
    return 0;
}
