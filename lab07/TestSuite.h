#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>
#include <string>

class TestSuite 
{
private:
    int testIndex;
public:
    TestSuite(); //Constructor
    void startSuite(); //Begin testing suite
    void printResult(bool testPassed) const;
    void printTestDesc(std::string testDesc);
    void printVector(const std::vector<int>& vect) const;
    //EMPTY LIST TESTS
    void test1();
    void test2();
    void test3();
    void test4();
    void test5();
    //NON-EMPTY LIST TESTS
    void test6();
    void test7();
    void test8();
    void test9();
    void test10();
    void test11();
    void test12();
    void test13();
    void test14();
    void test15();
    void test16();
    void test17();
    void test18();
    void test19();
    void test20();
    void test21();
    void test22();
    void test23();
};
#endif