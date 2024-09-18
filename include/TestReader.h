#ifndef TESTREADER_H
#define TESTREADER_H

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>
#include <memory>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class InputParser {
public:
    std::vector<std::string> readInputFile(const std::string& filename) {
        std::vector<std::string> result;
        std::ifstream file(filename);
        std::string line;
        while (std::getline(file, line)) {
            std::string trimmed_line = trim(line);
            if (!trimmed_line.empty()) {
                result.push_back(trimmed_line);
            }
        }
        return result;
    }
    std::string trim(const std::string& str) {
        auto start = str.begin();
        while (start != str.end() && std::isspace(*start)) {
            start++;
        }

        auto end = str.end();
        do {
            end--;
        } while (std::distance(start, end) > 0 && std::isspace(*end));

        return std::string(start, end + 1);
    }

    TreeNode* buildTree(const std::string& data) {
        std::string trimmed_data = trim(data);
        if (trimmed_data.empty() || trimmed_data == "[]") return nullptr;
        trimmed_data = trimmed_data.substr(1, trimmed_data.size() - 2); // Remove the brackets
        if (trimmed_data.empty()) return nullptr;
        std::istringstream iss(trimmed_data);
        std::string val;
        std::getline(iss, val, ',');
        TreeNode* root = new TreeNode(std::stoi(val));
        std::queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (std::getline(iss, val, ',')) {
                if (val != "null") {
                    node->left = new TreeNode(std::stoi(val));
                    q.push(node->left);
                }
            }
            if (std::getline(iss, val, ',')) {
                if (val != "null") {
                    node->right = new TreeNode(std::stoi(val));
                    q.push(node->right);
                }
            }
        }
        return root;
    }
};

class Output {
public:
    std::vector<std::string> outputData;
    static int counter;
    void appendInput(const std::string& str) {
        std::string ctr = std::to_string(counter++);
        ctr = ctr + ".Input:" + str;
        outputData.push_back(ctr);
    }
    void appendOutput(const std::string& str) {
        outputData.push_back(str);
    }
    void writeOutputFile(const std::string& filename) {
        std::ofstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open file for writing");
        }
        for (const auto& line : outputData) {
            file << line << std::endl;
        }
    }
};
int Output::counter = 1;

#endif // TESTREADER_H