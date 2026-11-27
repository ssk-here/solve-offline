#include <iostream>
#include "FileReader.h"
using namespace std;

int main() {
    // Your code goes here
    cout << "Hello, World!" << endl;
    const string s = "./Data/input.txt";
    ArrayFileReader Af(s);
    vector<vector<int>> V = Af.readArrays();
    for(int i=0;i<V.size();i++,cout<<endl)
    for(int j=0;j<V[i].size();j++)
    {
        cout<<V[i][j]<<"-";
    }
    return 0;
}
