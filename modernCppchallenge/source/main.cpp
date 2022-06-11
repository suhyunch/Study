#include <iostream>
#include "Problem/math_01.h"
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Test name : " << argv[1] << endl;

    cout << "Run test" << endl;

    Math01 math01 = Math01(atoi(argv[2]));
    
    cout << "Answer :" << math01.problemSolving() << endl;
    return 0;

}

