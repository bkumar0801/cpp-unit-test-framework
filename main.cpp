#include <iostream>
#include "TestSuite/suite.h"
#include "SampleTest/SampleTest.cpp"
using namespace TestSuite;

int main() {
    Suite suite("Sample Test");
    suite.addTest(new SampleTest);
    suite.run();
    suite.report();
    suite.free();
    return 0;
}