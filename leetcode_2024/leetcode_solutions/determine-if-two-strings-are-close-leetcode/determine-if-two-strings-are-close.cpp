#include <iostream>
#include <algorithm>
#include "FileReader.h"
using namespace std;
Printer P;
class Solution {
//Solution(){ios_base::sync_with_stdio(false);}
public:
    //function here
    int check()
    {
        int x = 's' - 'a';
        P.print(x,"x");
        return x;
    }
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        if(n != word2.length())
            return false;
        vector<int> freq1(26,0),freq2(26,0);
        for(int i=0;i<n;i++)
        {
            P.print(word1[i]-'a',"w1-a");
            P.print(word2[i]-'a',"w2-a");
            freq1[word1[i]-'a'] ++;
            freq2[word2[i]-'a'] ++;
        }
        for(int i=0;i<26;i++)
            if( (freq1[i] == 0 && freq2[i] != 0) || (freq2[i] == 0 && freq1[i] != 0) )
            return false;
        P.print(freq1,"1->");
        P.print(freq2,"2->");
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        P.print(freq1,"1->");
        P.print(freq2,"2->");
        for(int i=0;i<26;i++)
        if(freq1[i] !=freq2[i])
            return false;
        return true;
    }
};
int main() {
    // Your code goes here
    Solution S;
    P.print(2,"sairam");
    S.check();
    int b=0;
    if(b = S.closeStrings("uau","ssx"))
        P.print(b,"true");
    return 0;
}
