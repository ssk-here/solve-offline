
/**
* @file unionFind.cpp
* @author Srikanth S
* @date [Current Date]
* @see 
* @brief   
* Build using .\build.bat test unionFind
*/
#include <iostream>
#include <vector>
using namespace std;

class UnionFind{
    public:
        int count;
        vector<int> root,rank;
        UnionFind(int n): count(n), root(n), rank(n,0){
            for(int i=0;i<n;i++)
                root[i]=i;
        }
        int Find(int x){
            if( x == root[x])
                return x;
            root[x] = Find(root[x]); //path compression
            return root[x];
        }
        void Union(int x,int y){
            int rootx = Find(x), rooty= Find(y);
            if(rootx != rooty){
                count--;
                if(rank[rootx] > rank[rooty]) //assign smaller tree to larger.
                    root[rooty] = rootx;
                else if( rank[rootx] < rank[rooty])
                    root[rootx] = rooty;
                else{
                    rank[rootx]++;
                    root[rooty] = rootx;
                }
            }
        }
};



int main(int argc, char* argv[]) {


    return 0;
}
    