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
    int minimumDeletions(string s) {
    int n = s.length();
    vector<int> Acount(n,0),Bcount(n,0);
    if(s[n-1] == 'a')
        Acount[n-1] = 1;
    for(int i=n-2;i>=0;i--)
    {
        Acount[i] = Acount[i+1];
        if(s[i] == 'a')
            Acount[i] ++;
    }
    if(s[0] == 'b')
        Bcount[0] = 1;
    for(int i=1;i<n;i++)
    {
        Bcount[i] = Bcount[i-1];
        if(s[i] == 'b')
            Bcount[i]++;
    }
    print(Acount,"Acount");
    print(Bcount,"Bcount");
    // for index i - 
    //Bcount is number of bs before it including it
    // Acount is number of as after it including it.
    //delB is number of bs deleted so far.
    //delA is number of as deleted so far.
    
    int pos1 = 0, pos2 = n-1,nA,nB;
    int delA = 0,delB= 0;
    while(pos1 < pos2)
    {
        while(pos1 < n && s[pos1] == 'a')
            pos1++;
        while(pos2 >0 && s[pos2] == 'b')
            pos2--;
        print(pos1,"pos1");
        print(pos2,"pos2");
        if(pos1 < pos2)
        {
            nA = Acount[pos1] -delA;
            nB = Bcount[pos2] -delB;
            print(nA,"nA");
            print(nB,"nB");
            if(nA < nB)
            {
                delA++;
                pos2--;
            }
            else
            {
                delB++;
                pos1++;
            }
        }
    }
    return delA + delB;

        
    }
};


int main() {
    // Your code goes here
    
    StringFileReader Sf("./minimum-deletions-to-make-string-balanced-leetcode/input_strings.txt");
    std::vector<std::string> V = Sf.readStrings();
    Solution s;
    cout << V[0] << endl;
    print(s.minimumDeletions(V[1]),V[1]);
    return 0;
}
