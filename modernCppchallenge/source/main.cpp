#include <iostream>
#include "Problem/math_01.h"
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Test name : " << argv[1] << endl;

    cout << "Run test" << endl;

    //@todo: Add parser
    Math01 math01 = Math01("M01", atoi(argv[2]));
    
    math01.problemSolving();

    cout << "Answer :" << math01.getResult() << endl;
    return 0;

}

