#include "TestSuite.h"
#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

TestSuite::TestSuite(int size) : testSize(size), testIndex(0) {}

void TestSuite::printResult(bool testPassed) const
{
    if(testPassed)
    {
        std::cerr << "PASSED" << std::endl;
    }
    else
    {
        std::cerr << "FAILED" << std::endl;
    }
}

void TestSuite::printTestDesc(std::string testDesc)
{
    testIndex++;
    std::cerr << "Test " << testIndex << ": " << testDesc << ": ";
}

void TestSuite::printVector(const std::vector<int>& vect) const
{
    std::cerr << "{";
    for(std::size_t i=0; i<vect.size(); i++)
    {
        std::cerr << vect[i];
        if(i < (vect.size()-1))
        {
            std::cerr << ",";
        }
    }
    std::cerr << "}";
}

void TestSuite::startSuite()
{
    std::cerr << "\n///////////////////\n";
    std::cerr << " LAB 7 - TEST SUITE ";
    std::cerr << "\n///////////////////\n";
    test1();
}

bool TestSuite::test1()
{   //Not sure that I need my tests to return a bool if using printResult
    printTestDesc("size of an empty list is zero");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.size == 0)
    {
        testPassed = true;
    }

    printResult(testPassed);
    return(testPassed);
}