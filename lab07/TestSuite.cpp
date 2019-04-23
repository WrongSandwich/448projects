#include "TestSuite.h"
#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

using namespace std;

TestSuite::TestSuite() : testIndex(0) {}

void TestSuite::printResult(bool testPassed) const
{
    if(testPassed)
    {
        cout << "PASSED" << endl;
    }
    else
    {
        cout << "FAILED" << endl;
    }
}

void TestSuite::printTestDesc(string testDesc)
{
    testIndex++;
    cout << "Test " << testIndex << ": " << testDesc << ": ";
}

void TestSuite::printVector(const vector<int>& vect) const
{
    cout << "[";
    for(unsigned int i=0; i<vect.size(); i++)
    {
        cout << vect[i];
        if(i < (vect.size()-1))
        {
            cout << ",";
        }
    }
    cout << "]";
}

void TestSuite::startSuite()
{
    cout << "\n///////////////////\n";
    cout << " LAB 7 - TEST SUITE ";
    cout << "\n///////////////////\n";
    test1();
}

void TestSuite::test1()
{   //Confirms that LinkedList constructor creates an empty list with size 0
    printTestDesc("size of an empty list is zero");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.size() == 0)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test2()
{
    printTestDesc("isEmpty returns true for empty list");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.isEmpty() == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test3()
{
    printTestDesc("search returns false for empty list");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.search(34) == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test4()
{
    printTestDesc("removeBack returns false for empty list");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.removeBack() == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test5()
{
    printTestDesc("removeFront returns false for empty list");

    LinkedListOfInts list;
    bool testPassed = false;

    if (list.removeFront() == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}