
/**
 * @file TestReader.h
 * @brief Header file containing the definitions for TreeNode, ListNode, InputParser, and Output classes.
 * 
 * This file provides the necessary structures and classes to parse input data, build data structures
 * like binary trees and linked lists, and handle output operations.
 */

#ifndef TESTREADER_H
#define TESTREADER_H

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>
#include <memory>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class InputParser {
public:
    std::vector<std::string> readInputFile(const std::string& filename);
    std::string trim(const std::string& str);
    std::vector<int> buildVector(const std::string& data);
    TreeNode* buildTree(const std::string& data);
    ListNode* buildList(const std::vector<int> &data);
    ListNode* buildList(const std::string &data);
    std::vector<std::vector<int>> buildVectorOfVectors(const std::string& data);
    int readInt(const std::string& data);
    int readchar(const std::string& data);
};

class Output {
public:
    std::vector<std::string> outputData;
    static int counter;
    void appendInput(const std::string& str);
    void appendOutput(const std::string& str);
    void appendInput(const std::vector<int>& V);
    void appendOutput(const std::vector<int>& V);
    void appendOutput(ListNode *head);
    std::string toString(const std::vector<int>& V);
    std::string toString(const std::vector<std::vector<int>>& vecOfVecs);
    void appendOutput(const std::vector<std::vector<int>>& vecOfVecs);
    void writeOutputFile(const std::string& filename);

};

#endif // TESTREADER_H

    