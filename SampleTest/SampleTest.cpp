//
// Created by bijendrakumar on 14/05/17.
//

#include "../TestSuite/suite.h"

class SampleTest : public TestSuite::Test {
public:
    SampleTest() { }
    void run() {
        testSample();
    }
    void testSample() {
        test_(1 == 1);
    }
};

