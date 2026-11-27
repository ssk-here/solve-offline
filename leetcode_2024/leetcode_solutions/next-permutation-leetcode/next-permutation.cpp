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
    void reverse(vector<int> & nums, int pos1, int pos2) // pos1 and pos2 included.
    {
        int temp = 0;
        while(pos1 < pos2)
        {
            temp  = nums[pos1];
            nums[pos1] = nums[pos2];
            nums[pos2] = temp;
            pos1++;
            pos2--;
        }
    }

    //function here
     void nextPermutation(vector<int>& nums)  {
        int n = nums.size();
        int cur = n-1;
        while(cur > 0 && (nums[cur] < nums[cur-1]) )
            cur --;
        if(cur == 0)
        {
            reverse(nums,0,n-1);
            return;
        }
        //find smallest elem greater than nums[cur-1]
        int pos = cur-1,val = nums[pos];
        cur=n -1;
        while(nums[cur] < val)
            cur --;
        nums[pos] = nums[cur];
        nums[cur] = val;
        reverse(nums,pos+1,n-1);
        
    }
};
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main() {
    // Your code goes here
    Solution S;
    vector<int> V{1,2,3,4};
    int f = fact(V.size());
    for(int i = 0;i<f;i++)
    {
        S.nextPermutation(V);
        print(V,"V=");
    }

    return 0;
}
