/**
*	@author Evan Trout
*	@date 4/24/19
*	@file TestSuite.h
*	@brief Header for TestSuite, which tests LinkedListOfInts
*/

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
    //EMPTY LIST TESTS
    void test1(); //size of an empty list is zero
    void test2(); //isEmpty returns true for empty list
    void test3(); //search returns false for empty list
    void test4(); //removeBack returns false for empty list
    void test5(); //removeFront returns false for empty list
    //NON-EMPTY LIST TESTS
    void test6(); //size will be 1 after addBack of 1
    void test7(); //size will be 1 after addFront of 1
    void test8(); //addBack with invalid value will not affect size
    void test9(); //addFront with invalid value will not affect size
    void test10(); //size will be 3 after 3 addBack
    void test11(); //size will be 3 after 3 addFront
    void test12(); //isEmpty returns false after addBack of 1
    void test13(); //isEmpty returns false after addFront of 1
    void test14(); //search returns true for a value in a populated list
    void test15(); //search returns false for a value not in a populated list
    void test16(); //removeBack returns true on populated list
    void test17(); //removeFront returns true on populated list
    void test18(); //removeBack reduces size by 1 on populated list
    void test19(); //removeFront reduces size by 1 on populated list
    void test20(); //removeBack actually removes the last entry of a list
    void test21(); //removeFront actually removes the last entry of a list
    void test22(); //multiple removeBack calls adjusts size correctly
    void test23(); //multiple removeFront calls adjust size correctly
    void test24(); //multiple addBack calls with different types only accepts ints
    void test25(); //multiple addFront calls with different types only accepts ints
    void test26(); //addBack with invalid value will not affect isEmpty
    void test27(); //addFront with invalid value will not affect isEmpty
    void test28(); //addBack & addFront actually creates the specified list
    void test29(); //addBack actually creates the specified list
    void test30(); //addFront actually creates the specified list
    void test31(); //addBack functions like addFront?
    void test32(); //multiple addFront w/ an invalid value still creates correct list
};
#endif
