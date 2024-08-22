#include <iostream>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        if(n==1 || m==1)
            return 1;
        vector<vector<int>> DP(m,vector<int>(n,0)),C(m,vector<int>(n,0)),R(m,vector<int>(n,0));
        //R[i][j] is number of consecutive 1s from i,j  going left.
        //C[i][j] is number of consecutive 1s from i,j  going up.
        //DP[i][j] represents the sqrt of the largest area including i,j
        // if upper diagonal, above and left should be nonzero, then
        // mc = max continuous 1s in col starting from i,j going up. similarly mr
        // min(mr,mc,DP[i-1][j-1]) + 1
        int cur_row = 1,cur_col = 1,i,j,res = 0;
        //0-th row
        for(int i=0;i<m;i++)
        if(matrix[i][0] == '1')
        {   DP[i][0] = 1;
            C[i][0]=1;
            R[i][0]=1;
        }
        //0-th col
        for(int j=1;j<n;j++)
        if(matrix[0][j] == '1')
        {
            DP[0][j] = 1;
            C[0][j]=1;
            R[0][j]=1;
        
        }
        
        
        while(cur_row < m && cur_col < n)
        {
            //calc for col
            j = cur_col;
            for(int i=cur_row;i<m;i++)
            {
                if(matrix[i][j] == '1')
                {
                    C[i][j] = C[i-1][j] +1;
                    R[i][j] = R[i][j-1] +1;
                    DP[i][j] = min(min(C[i][j],R[i][j]),DP[i-1][j-1]) + 1;
                    if(res < DP[i][j])
                        res = DP[i][j];
                    P.print(i,"i");
                    P.print(j,"j");
                    P.print(DP[i][j],"RDP");
                    P.print(C[i][j],"C");
                    P.print(R[i][j],"R");
                }
            }
            //calc for row
            i = cur_row;
            for(int j=cur_col+1;j<n;j++)
            {
                if(matrix[i][j] == '1')
                {
                    C[i][j] = C[i-1][j] +1;
                    R[i][j] = R[i][j-1] +1;
                    DP[i][j] = min(min(C[i-1][j],R[i][j-1]),DP[i-1][j-1]) + 1;
                    if(res < DP[i][j])
                        res = DP[i][j];
                    P.print(i,"i");
                    P.print(j,"j");
                    P.print(DP[i][j],"CDP");
                    P.print(C[i][j],"C");
                    P.print(R[i][j],"R");
                }
            }
            cur_row++;
            cur_col++;
            
        }
        return res*res;        
    }
};
int main() {
    // Your code goes here
    Solution S;
    
    vector<vector<char>> M = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}} ;
    int res = S.maximalSquare(M);
    P.print(res,"res");
    return 0;
}
