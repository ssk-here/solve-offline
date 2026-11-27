#include <iostream>
#include "FileReader.h"
using namespace std;
void print(vector<int> &V,string s)
{
    cout<<endl<<s;
    int n = V.size();
    for(int i=0;i<n;i++)
        cout<<V[i]<<"-";
    cout<<endl;
}

void print(int a,string s)
{
    cout<<endl<<s<<"-";
    cout<<a<<endl;
}
class Solution {
public:
   
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n  = nums.size(),val,temp;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != -1)
            {
                val = nums[i];
                while(nums[val-1] != -1)
                {
                    temp= nums[val-1];
                    nums[val-1] = -1;
                    val =temp;
                }
            }
        }
        int cur = 0;
        for(int i=0;i<n;i++)
        if(nums[i] != -1)
            nums[cur++] = i+1;
        nums.erase(nums.begin() + cur,nums.end());
        return nums;
        
    }
};
/*
vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int& x:nums){x<<=1;} //set last bit to 0 for all numbers
        for(int x:nums){
            nums[(x>>1)-1]|=1; set last bit to 1 for values which exist
        }

        int p=0;
        for(int l=0;l<nums.size();l++){
            if(!(nums[l]&1)){nums[p]=l+1;p++;} //check if last bit is 1
        }
        nums.resize(p);
    
    return nums;
    }
*/
int main() {
    // Your code goes here
    Solution S;
    vector<int> V{4,3,2,7,8,2,3,1};
    vector<int> res = S.findDisappearedNumbers(V);
    print(res,"res");

    return 0;
}
