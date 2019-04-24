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
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    test12();
    test13();
    test14();
    test15();
    test16();
    test17();
    test18();
    test19();
    test20();
    test21();
    test22();
    test23();
    test24();
    test25();
    test26();
    test27();
    test28();
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

void TestSuite::test6()
{
    printTestDesc("size will be 1 after addBack of 1");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(22);
    if (list.size() == 1)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test7()
{
    printTestDesc("size will be 1 after addFront of 1");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addFront(34);
    if (list.size() == 1)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test8()
{
    printTestDesc("addBack with invalid value will not affect size");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack('a');
    if (list.size() == 0)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test9()
{
    printTestDesc("addFront with invalid value will not affect size");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addFront('a');
    if (list.size() == 0)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test10()
{
    printTestDesc("size will be 3 after 3 addBack");

    LinkedListOfInts list;
    bool testPassed = false;

    for (int i = 0; i < 3; i++)
    {
        list.addBack(i);
    }

    if (list.size() == 3)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test11()
{
    printTestDesc("size will be 3 after 3 addFront");

    LinkedListOfInts list;
    bool testPassed = false;

    for (int i = 0; i < 3; i++)
    {
        list.addFront(i);
    }

    if (list.size() == 3)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test12()
{
    printTestDesc("isEmpty returns false after addBack of 1");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(22);
    list.addBack(6);
    if (list.isEmpty() == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test13()
{
    printTestDesc("isEmpty returns false after addFront of 1");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addFront(34);
    if (list.isEmpty() == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test14()
{
    printTestDesc("search returns true for a value in a populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    //11, 34, 6, 22, 13
    if (list.search(34) == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test15()
{
    printTestDesc("search returns false for a value not in a populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);

    if (list.search(7) == false)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test16()
{
    printTestDesc("removeBack returns true on populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);

    if (list.removeBack() == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test17()
{
    printTestDesc("removeFront returns true on populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);

    if (list.removeFront() == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test18()
{
    printTestDesc("removeBack reduces size by 1 on populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    list.removeBack();

    if (list.size() == 4)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test19()
{
    printTestDesc("removeFront reduces size by 1 on populated list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    list.removeFront();

    if (list.size() == 4)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test20()
{
    printTestDesc("removeBack actually removes the last entry of a list");
    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    //11, 34, 6, 22, 13
    list.removeBack();
    std::vector<int> vec = list.toVector();
    std::vector<int> key;
    key.push_back(11);
    key.push_back(34);
    key.push_back(6);
    key.push_back(22);

    if (vec == key)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test21()
{
    printTestDesc("removeFront actually removes the first entry of a list");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    //11, 34, 6, 22, 13
    list.removeFront();
    std::vector<int> vec = list.toVector();
    std::vector<int> key;
    key.push_back(34);
    key.push_back(6);
    key.push_back(22);
    key.push_back(13);

    if (vec == key)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test22()
{
    printTestDesc("multiple removeBack calls adjusts size correctly");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    for (int i = 0; i < 3; i++)
    {
        list.removeBack();
    }

    if (list.size() == 2)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test23()
{
    printTestDesc("multiple removeFront calls adjust size correctly");

        LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    for (int i = 0; i < 3; i++)
    {
        list.removeFront();
    }

    if (list.size() == 2)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test24()
{
  printTestDesc("multiple addBack calls with different types only accepts ints");

  LinkedListOfInts list;
  bool testPassed = false;

  list.addBack(34);
  list.addBack(6);
  list.addBack('a');

  if (list.size() == 2)
  {
    testPassed = true;
  }

  printResult(testPassed);
}

void TestSuite::test25()
{
  printTestDesc("multiple addFront calls with different types only accepts ints");

  LinkedListOfInts list;
  bool testPassed = false;

  list.addFront(34);
  list.addFront(6);
  list.addFront('a');

  if (list.size() == 2)
  {
    testPassed = true;
  }

  printResult(testPassed);
}

void TestSuite::test26()
{
    printTestDesc("addBack with invalid value will not affect isEmpty");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack('a');
    if (list.isEmpty() == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test27()
{
    printTestDesc("addFront with invalid value will not affect isEmpty");

    LinkedListOfInts list;
    bool testPassed = false;

    list.addFront('a');
    if (list.isEmpty() == true)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test28()
{
    printTestDesc("addBack & addFront actually creates the specified list");
    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(6);
    list.addFront(34);
    list.addBack(22);
    list.addFront(11);
    list.addBack(13);
    //11, 34, 6, 22, 13
    vector<int> vec = list.toVector();
    vector<int> key;
    key.push_back(11);
    key.push_back(34);
    key.push_back(6);
    key.push_back(22);
    key.push_back(13);

    if (vec == key)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test29()
{
    printTestDesc("addBack actually creates the specified list");
    LinkedListOfInts list;
    bool testPassed = false;

    list.addBack(11);
    list.addBack(34);
    list.addBack(6);
    list.addBack(22);
    list.addBack(13);
    //11, 34, 6, 22, 13
    vector<int> vec = list.toVector();
    vector<int> key;
    
    key.push_back(11);
    key.push_back(34);
    key.push_back(6);
    key.push_back(22);
    key.push_back(13);

    if (vec == key)
    {
        testPassed = true;
    }

    printResult(testPassed);
}

void TestSuite::test30()
{
    printTestDesc("addFront actually creates the specified list");
    LinkedListOfInts list;
    bool testPassed = false;

    list.addFront(11);
    list.addFront(34);
    list.addFront(6);
    list.addFront(22);
    list.addFront(13);
    //11, 34, 6, 22, 13
    vector<int> vec = list.toVector();
    vector<int> key;
    
    key.push_back(11);
    key.push_back(34);
    key.push_back(6);
    key.push_back(22);
    key.push_back(13);

    if (vec == key)
    {
        testPassed = true;
    }

    printResult(testPassed);
}