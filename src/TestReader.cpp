#include <TestReader.h>
using namespace std;

std::vector<std::string> InputParser::readInputFile(const std::string& filename) {
    // Reads input file and returns a vector of trimmed non-empty lines
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

std::string InputParser::trim(const std::string& str) {
    // Trims leading and trailing whitespace from a string
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

std::vector<int> InputParser::buildVector(const std::string& data) {
    // Builds a vector of integers from a comma-separated string
    std::string trimmed_data = InputParser::trim(data);
    if (trimmed_data.empty() || trimmed_data == "[]") return {};
    trimmed_data = trimmed_data.substr(1, trimmed_data.size() - 2); // Remove the brackets
    if (trimmed_data.empty()) return {};
    std::istringstream iss(trimmed_data);
    std::string val;
    std::vector<int> res;
    while (std::getline(iss, val, ',')) {
        res.push_back(stoi(val));
    }
    return res;
}

TreeNode* InputParser::buildTree(const std::string& data) {
    // Builds a binary tree from a comma-separated string
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


// Function to build a linked list from a string
ListNode* InputParser::buildList(const std::string &data) {
    std::vector<int> vec = buildVector(data);
    return buildList(vec);
}

// Function to build a linked list from a vector of integers
ListNode* InputParser::buildList(const std::vector<int>&data) {
    ListNode* dummy = new ListNode(0,NULL);
    ListNode* current = dummy;
    for (int value : data) {
        current->next = new ListNode(value);
        current = current->next;
    }
    ListNode* head = dummy->next;
    delete dummy;
    return head;
}

// Function to read an integer from a string
int InputParser::readInt(const std::string& data) {
    return std::stoi(data);
}

// Function to read a character from a string
int InputParser::readchar(const std::string& data) {
    if (!data.empty()) {
        return data[0];
    }
    throw std::invalid_argument("Empty string provided");
}
// Function to build a vector of vectors from example [[0,2],[5,10],[13,23],[24,25]]
std::vector<std::vector<int>> InputParser::buildVectorOfVectors(const std::string& data) {
    std::string trimmed_data = trim(data);
    if (trimmed_data.empty() || trimmed_data == "[]" || trimmed_data == "[[]]") return {};

    std::vector<std::vector<int>> result;
    trimmed_data = trimmed_data.substr(1, trimmed_data.size() - 2); // Remove the outer brackets

    std::istringstream iss(trimmed_data);
    std::string vec_str;
    while (std::getline(iss, vec_str, ']')) {
        if (vec_str.empty()) continue;
        vec_str = vec_str.substr(1); // Remove the leading comma and bracket
        if (!vec_str.empty() && vec_str[0] == ',') vec_str = vec_str.substr(1); // Remove leading comma if present
        vec_str = "[" + vec_str + "]"; // Add brackets to make it a valid vector string
        result.push_back(buildVector(vec_str));
    }

    return result;
}

///////////////////////////////////// OUTPUT CLASS /////////////////////////////////////////////////////

int Output::counter = 1;

void Output::appendInput(const std::string& str) {
    // Appends a string input to the output data with a counter
    std::string ctr = std::to_string(counter++);
    ctr = ctr + ".Input:" + str;
    outputData.push_back(ctr);
}

void Output::appendOutput(const std::string& str) {
    // Appends a string output to the output data
    outputData.push_back(str);
}

void Output::appendInput(const std::vector<int>& V) {
    // Appends a vector input to the output data with a counter
    std::string ctr = std::to_string(Output::counter++);
    std::string str = Output::toString(V);
    ctr = ctr + ".Input:" + str;
    outputData.push_back(ctr);
}

void Output::appendOutput(const std::vector<int>& V) {
    // Appends a vector output to the output data
    std::string str = Output::toString(V);
    outputData.push_back(str);
}

std::string Output::toString(const std::vector<int>& V) {
    // Converts a vector of integers to a string representation
    std::string res = "[";
    int n = V.size();
    if (n)
        res += std::to_string(V[0]);
    for (int i = 1; i < n; i++) {
        res += ",";
        res += std::to_string(V[i]);
    }
    res += "]";
    return res;
}

std::string Output::toString(const std::vector<std::vector<int>>& vecOfVecs) {
    // Converts a vector of vectors of integers to a string representation
    if (vecOfVecs.empty()) return "[]";
    
    std::string res = "[";
    for (size_t i = 0; i < vecOfVecs.size(); ++i) {
        res += toString(vecOfVecs[i]);
        if (i != vecOfVecs.size() - 1) {
            res += ",";
        }
    }
    res += "]";
    return res;
}

void Output::appendOutput(const std::vector<std::vector<int>>& vecOfVecs) {
    // Appends a vector of vectors output to the output data
    std::string str = toString(vecOfVecs);
    outputData.push_back(str);
}

void Output::appendOutput(ListNode* head) {
    // Appends a linked list input to the output data with a counter
    std::vector<int> result;
    ListNode* current = head;
    while (current != nullptr) {
        result.push_back(current->val);
        current = current->next;
    }
    appendOutput(result);
}

void Output::writeOutputFile(const std::string& filename) {
    // Writes the output data to a file
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file for writing");
    }
    for (const auto& line : outputData) {
        file << line << std::endl;
    }
}
