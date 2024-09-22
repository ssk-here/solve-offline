
/**
* @file unique-paths.cpp
* @author Srikanth S
* @date [Current Date]
* @see https://leetcode.com/problems/unique-paths
* @brief   
* Time Complexity: 
* Space Complexity: 
*  Build using .\build.bat "WEEK5" "unique-paths"
*/
#include <allheaders.h>
using namespace std;
class Solution1 {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m,vector<int>(n));
        for(int i=0;i<m;i++)
            grid[i][n-1] = 1;
        for(int j=0;j<n;j++)
            grid[m-1][j] = 1;
        grid[m-1][n-1] = 0;
        for(int i=m-2;i>=0;i--)
        for(int j=n-2;j>=0;j--)
            grid[i][j] = grid[i+1][j] + grid[i][j+1];

        return grid[0][0];
    }

};
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)
            return 1;
        m--; n--;
        if(m<n)
            swap(m,n);
        //we have m >= n . we need m+n choose n. (m+n)! /m!n!. Since m is greater we
        //use m+n * m+n-1 * ... * m+1 /n * n-1 * n-2 *... 1
        // calculating numerator may go out of bounds. 
        //we know that either m+1 or m+2 is divisible by 2.
        //either m+1 m+2 m+3 is divisible by 3 and so on. 
        int prod_num = m+1;
        // cout<<"m="<<m<<" n="<<n<<endl;
        // for(int pos=1;pos<=n;pos++){
        //     cout<<"m="<<(m+pos)<<"; pos="<<pos<<endl;
        //     cout<<"remainder="<<((m+pos)%n)<<endl;
        // }
        // cout<<"-------------------------------------------------------"<<endl;
        for(int i=2;i<=n;i++){
            prod_num *= (m+i);
            prod_num = prod_num/i;
        }
        return prod_num;

    }

};
void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Output Op;
    std::vector<std::string> V = Ip.readInputFile(inputfile);
    int m,n,res;
    for(size_t i=0; i<V.size(); i+=2) {  
        m = Ip.readInt(V[i]);
        n = Ip.readInt(V[i+1]);
        Solution solution;//need new object for each test case
        res = solution.uniquePaths(m,n);
        Op.appendInput(m,n);
        Op.appendOutput(res);
    }

    Op.writeOutputFile(outputfile);
}
int main(int argc, char* argv[]) {
	Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    