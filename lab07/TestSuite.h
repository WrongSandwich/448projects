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
    //bool is sorted ascending and descending?
    //Need a random generator for list?
};
#endif