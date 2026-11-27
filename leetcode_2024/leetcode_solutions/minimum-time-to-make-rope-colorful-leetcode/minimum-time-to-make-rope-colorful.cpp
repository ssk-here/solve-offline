#include <iostream>
#include "FileReader.h"
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cur = 1, n= colors.length();
        int min_time = 0, cur_time  = 0,cur_max;
        char prev = colors[0];
        while(cur < n)
        { 
            if(colors[cur] == prev)
            {
                cur_max = neededTime[cur-1];
                cur_time = cur_max;
                while(colors[cur] == prev)
                {
                    if(neededTime[cur] > cur_max)
                        cur_max = neededTime[cur];
                    cur_time+=neededTime[cur];
                    cur++;   
                }
                min_time += (cur_time - cur_max);
            }
            else
            {
                prev = colors[cur++];
            }
        }
        return min_time;
    }
};
int main() {
    // Your code goes here
    vector<int> times{1,2,3,4,5};
    string colors = "abaac";
    Solution S;
    cout<<"min time"<<S.minCost(colors,times)<<endl;
    return 0;
}
