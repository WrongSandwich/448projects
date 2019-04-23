#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>
#include <string>

class TestSuite 
{
private:
    const int testSize;
    int testIndex;
public:
    TestSuite(int size); //Constructor
    void startSuite(); //Begin testing suite
    void printResult(bool testPassed) const;
    void printTestDesc(std::string testDesc);
    void printVector(const std::vector<int>& vect) const;
    bool test1();
    //bool is sorted ascending and descending?
    //Need a random generator for list?
};
#endif