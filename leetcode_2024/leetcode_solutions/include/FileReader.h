#ifndef ARRAYFILEREADER_H
#define ARRAYFILEREADER_H

#include <vector>
#include <string>
#include <iostream>

class Printer{

public:
void print(std::vector<int> &V,std::string s)
{
    std::cout<<std::endl<<s;
    int n = V.size();
    for(int i=0;i<n;i++)
        std::cout<<V[i]<<"-";
    std::cout<<std::endl;
}

void print(int a,std::string s)
{
    std::cout<<std::endl<<s<<"-";
    std::cout<<a<<std::endl;
}
};

class ArrayFileReader {
public:
    // Constructor
    ArrayFileReader(const std::string &filename);

    // Function to read arrays from the file
    std::vector<std::vector<int>> readArrays();
    std::vector<std::vector<int>> getData();
    void print();

private:
    std::string filename;
    std::vector<std::vector<int>> V;
};

class StringFileReader {
    public:
    // Constructor
    StringFileReader(const std::string &filename);

    // Function to read arrays from the file
    std::vector<std::string> readStrings();
    std::vector<std::string> getData();
    void print();

private:
    std::string filename;
    std::vector<std::string> V;

};

#endif // ARRAYFILEREADER_H
