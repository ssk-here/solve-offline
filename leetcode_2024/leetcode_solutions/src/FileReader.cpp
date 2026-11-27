#include "FileReader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

// Constructor implementation
ArrayFileReader::ArrayFileReader(const std::string &filename) : filename(filename) {}

// Function to read arrays from the file
std::vector<std::vector<int>> ArrayFileReader::readArrays() {
    std::vector<std::vector<int>> arrays;
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::vector<int> array;
        int number;
        
        while (ss >> number) {
            array.push_back(number);
        }

        if (!array.empty()) {
            arrays.push_back(array);
        }
    }

    file.close();
    V=arrays;
    return arrays;
}

std::vector<std::vector<int>> ArrayFileReader::getData() {
    return V;
}

void ArrayFileReader::print()
{
    for(int i=0;i<V.size();i++,std::cout<<std::endl)
    for(int j=0;j<V[i].size();j++)
    {
        std::cout<<V[i][j]<<"--";
    }
}


StringFileReader::StringFileReader(const std::string &filename) : filename(filename) {}

std::vector<std::string> StringFileReader::readStrings() {
    std::vector<std::string> arrays;
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::string line;
    while (std::getline(file, line)) {
        arrays.push_back(line);
    }

    file.close();
    V = arrays;
    return arrays;

}

std::vector<std::string> StringFileReader::getData() {
    return V;
}

void StringFileReader::print()
{
     for(int i=0;i<V.size();i++,std::cout<<std::endl)
     std::cout<<V[i];
}