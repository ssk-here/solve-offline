
/**
* @file sliding-window-maximum.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/sliding-window-maximum
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat SEAN_PRASAD sliding-window-maximum
*/

/*
n logk
Maintain maxheap of size k , with only positions.
When we reach heap.top position as start_window element , while traversing, pop all top elements as long as they are lesser than cur_start.
Getmax is order 1. deletemax is O(logk)



Let M be a position vector of size k max(0:k-1), max(1,k-1) ,max(2,k-1) .. max(k-1,k-1) 
When we see a new element, update M[k-1] , if it is greater than M[k-2], update that ans so on, till it is not greater(can be =also)


Find maxval and maxpos in first k elements . push maxval
in [1,k+1]
if nums[k+1] >= maxval, set maxpos = k+1, maxval = nums[k+1].push maxval
if not, 
if maxpos < cur_start ( k+1 - k) (ie maxpos=0)

else
    push maxval






*/

#include <allheaders.h>
using namespace std;
class Solution {
public:
    struct comp{
        vector<int> &V;
        comp(vector<int> &nums):V(nums){}
        bool operator()(int pos1,int pos2)const
        { 
            if(V[pos1] == V[pos2]) 
                return pos1 < pos2; 
            return V[pos1] < V[pos2];
        }
    };
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        comp C(nums);
        priority_queue<int,vector<int>,comp> pq(C);
        for(int i=0;i<k;i++){
            pq.push(i);
        }
        vector<int> res(n-(k-1));
        res[0] = nums[pq.top()];
        for(int end = k,start;end<n;end++){
            start = end-k+1;
            pq.push(end);
            while(pq.top() < start)
                pq.pop();
            res[start] = nums[pq.top()];
        }
        return res;
    }
};
// reads vector and int
// writes int
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    int target;
    std::vector<int> Output;
    std::vector<int> Vin,Vin1,Vout;
    for(size_t i=0; i<V.size(); i+=2) {  
        Vin = Ip.buildVector(V[i]);
        target = Ip.readInt(V[i+1]);
        Vin1=Vin;//pass by reference changes Vin
        Solution solution;//need new object for each test case
        Output = solution.maxSlidingWindow(Vin,target);
        Op.appendInput(Vin1,target);
        Op.appendOutput(Output);
    }

    Op.writeOutputFile(outputfile);
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    