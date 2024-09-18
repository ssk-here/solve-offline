
/**
* @file binary-tree-paths.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/binary-tree-paths
* @brief   
* Time Complexity: 
* Space Complexity: 
*/
#include <allheaders.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> ans;
    void addpath(TreeNode *root,string &path){
        if(!root->left && !root->right){
            ans.push_back(path+to_string(root->val));
        }
        int l = path.length();
        path += to_string(root->val) + "->";
        l = path.length() - l;
        if(root->left)
            addpath(root->left,path);
        if(root->right)
            addpath(root->right,path);
        path.erase(path.length()-l);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        ans ={};
        string path="";
        addpath(root,path);
        return ans;
    }
};

void Test(const std::string& inputfile, const std::string& outputfile) {
    InputParser Ip;
    Solution solution;
    Output Op;

    std::vector<std::string> V = Ip.readInputFile(inputfile);
    std::vector<std::string> Output;
    for (auto &input : V) {
        TreeNode* root = Ip.buildTree(input);
        std::vector<std::string> paths = solution.binaryTreePaths(root);
        Op.appendInput(input);
        for (auto p : paths)
            Op.appendOutput(p);
    }

    Op.writeOutputFile(outputfile);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <inputfile> <outputfile>" << std::endl;
    return 1;
    }

    std::ifstream infile(argv[1]);
    if (!infile) {
    std::cerr << "Could not open input file." << std::endl;
    return 1;
    }

    std::ofstream outfile(argv[2]);
    if (!outfile) {
    std::cerr << "Could not open output file." << std::endl;
    return 1;
    }

    Test(argv[1], argv[2]);

    return 0;
}
    