//
// Created by bijendrakumar on 13/05/17.
//

#ifndef EQUAL_SUITE_H
#define EQUAL_SUITE_H

#include <vector>
#include <stdexcept>
#include "test.h"
using std::vector;
using std::logic_error;

namespace TestSuite {
    class TestSuiteError : public logic_error {
    public:
        TestSuiteError(const string &s = "") : logic_error(s) {

        }
    };

    class Suite {
        string name;
        ostream *osptr;
        vector<Test *> tests;
        void reset();
        Suite(const Suite&);
        Suite& operator=(const Suite&);

    public:
        Suite(const string& name, ostream* osptr = &cout):
                name(name) {
            this->osptr = osptr;
        }
        string getName() const { return name; }
        long getNumPassed() const;
        long getNumFailed() const;
        const ostream* getStream()const { return osptr;}
        void setStream(ostream* osptr) { this->osptr = osptr;}
        void addTest(Test* t) throw(TestSuiteError);
        void addSuite(const Suite&);
        void run();
        long report()const;
        void free();
    };
}

#endif //EQUAL_SUITE_H
