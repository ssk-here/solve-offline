
/**
* @file set_impl.cpp
* @author Srikanth S
* @date [Current Date]
* @see 
* @brief   
* Build using .\build.bat test set_impl
*/
#include <allheaders.h>
using namespace std;

void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    