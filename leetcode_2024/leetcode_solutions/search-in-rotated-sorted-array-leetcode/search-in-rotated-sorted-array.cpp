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
     int search(vector<int>& nums, int target)     {
        int low = 0, high = nums.size() - 1,mid;
        // if(nums[low]== target) return low;
        // if(nums[high] == target) return high;
        // low++;
        // high--;
       
        while(low<=high)
        {
            mid = low + (high-low)/2 ;
            if(nums[mid] == target)
                return mid;
            print(mid,"mid");
            print(low,"low");
            print(high,"high");
            if( nums[low] <= nums[mid] && nums[mid] <= nums[high])
            {
                if(nums[mid] <= target)
                low = mid+1;
                else
                high = mid-1;
                continue;
            }
            
            if(nums[low] <= nums[mid]) //mid is in left sorted part of array
            {
                // target is lesser and in left part - high = mid-1
                // target is greater(has to be in left part) - low = mid+1;
                // target is in right part(has to be lesser) - low = mid+1
                if(nums[mid] < target || target <= nums[high])
                    low = mid+1;
                else if(nums[mid] > target) // target is in left part and lesser
                    high = mid-1;
                
            }
            else // mid is in right sorted part of array
            {
                // target is greater and in right part - low = mid+1;
                // target is in left part - high = mid -1;
                // target is lesser (means in right part) - high = mid-1
                // target is higher and in right part - low = mid+1
                if(nums[mid] > target || target >= nums[low]) // target is lesser or in left part
                    high = mid -1;
                else if(nums[mid] < target)
                    low  = mid+1;
                
                

            }
        }
        return -1;
    }
};
int main() {
    // Your code goes here
    Solution S;
    vector<int> V{4,5,6,7,0,1,2};
    int res = S.search(V,0);
    print(res,"res");

    return 0;
}
