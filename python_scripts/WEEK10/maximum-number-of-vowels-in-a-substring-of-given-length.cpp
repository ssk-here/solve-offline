
/**
* @file maximum-number-of-vowels-in-a-substring-of-given-length.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length
* @brief   
* Time Complexity: 
* Space Complexity: 
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        
    }
};
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
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
    