/**
*	@author Evan Trout
*	@date 4/24/19
*	@file main.cpp
*	@brief calls and runs the TestSuite
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{

	TestSuite myTester;
	myTester.startSuite();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

