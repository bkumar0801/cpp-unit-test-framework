//
// Created by bijendrakumar on 13/05/17.
//

#include "test.h"
#include <iostream>
#include <typeinfo>

using namespace std;
using namespace TestSuite;

void Test::do_test(bool cond, const string &lbl, const char *fname, long lineno) {
    if(!cond)
        do_fail(lbl,fname,lineno);
    else
        succeed_();
}

void Test::do_fail(const string &lbl, const char *fname, long lineno) {
    ++nFail;
    if(osptr) {
        *osptr <<typeid(*this).name()
               <<"failure: ("<<lbl<<") , "<<fname
               <<" (line " << lineno << ")" <<endl;
    }
}

long Test::report() const {
    if(osptr) {
        *osptr << "Test \"" << typeid(*this).name()
               <<"\":\n\t Passed: "<<nPass
               <<"\tFailed: "<<nFail
               <<endl;
    }
    return nFail;
}