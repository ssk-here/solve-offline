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
    //function here - nums length < 10^5
    int firstMissingPositive(vector<int>& nums){
        int res = 0;
        int cur1 =0,cur2 = 0,n = nums.size(),total_positive = 0,min_positive = 0;
        for(int cur1 = 0;cur1<n;cur1++)
        {
            if(nums[cur1] > 0)
            {
                nums[cur2++] = nums[cur1];
                if( (nums[cur1] <  min_positive) || min_positive == 0)
                    min_positive = nums[cur1];
            }
        }
        if(cur2 == 0 || min_positive > 1)
            return 1;
        total_positive = cur2; // last positive index is cur2-1
        vector<int> mark(total_positive,0);
        print(total_positive,"total");
        for(int cur1 = 0;cur1<total_positive;cur1++)
        {
            if(nums[cur1] < total_positive)
                mark[nums[cur1]] = 1;
        }
        for(int cur1=1;cur1<total_positive;cur1++)
        if(!mark[cur1])
            return cur1;
        return total_positive;
    }
};
int main() {
    // Your code goes here
    Solution S;
    ArrayFileReader Af("./first-missing-positive-leetcode/input.txt");
    vector<vector<int>> V = Af.readArrays();
    print(V[0],"qn");
    print(S.firstMissingPositive(V[0]),"ans");
    
    
    return 0;
}
