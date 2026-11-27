#include <iostream>
#include <stdio.h>
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

void print(string a,string s)
{
    cout<<endl<<s<<"-";
    cout<<a<<endl;
}

class Solution {
public:
  string convert(string s, int numRows) {
  int n = s.length();
  if(numRows >= n || numRows == 1)
    return s;
  int diff  = 2*(numRows - 1) , cur_diff = 0;
  string res(n,' ');
  int cur = 0;
  for(int i=0;i<numRows;i++)
  {
    cur_diff = diff;
    res[cur++] = s[i];
    print(i,"i");
    print(cur,"cur");
    print(res,"res1");
    do
    {
        if(i>0 && i<(numRows-1) && cur_diff - i < n)
            res[cur++] = s[cur_diff - i];
        if(cur_diff+i < n)
            res[cur++] = s[cur_diff+i];        
        cur_diff += diff;
    }
    while(cur_diff - i < n);
    print(res,"res2");
  }
  return res;
  }

};

int main() {
    // Your code goes here
    StringFileReader Sf("./zigzag-conversion-leetcode/input_strings.txt");
    vector<string> V = Sf.readStrings();
    //Sf.print();
    Solution S;
    cout<<S.convert( V[0],stoi(V[1]) )<<endl;
    cout<<S.convert( V[2],stoi(V[3]) )<<endl;
    cout<<S.convert( V[4],stoi(V[5]) )<<endl;
    cout<<S.convert( V[6],stoi(V[7]) )<<endl;
   
    return 0;
}
