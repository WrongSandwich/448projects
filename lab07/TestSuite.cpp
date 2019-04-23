#include "TestSuite.h"
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

void TestSuite::printTestMessage(std::string testDesc)
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