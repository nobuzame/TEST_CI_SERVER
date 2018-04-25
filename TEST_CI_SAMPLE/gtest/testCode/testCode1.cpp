// testCode1.cpp : Defines the entry point for the console application.
//

//-------------------------------------------------------------
// Include File
//-------------------------------------------------------------
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "../gmock_fused-src/gtest/gtest.h"

//-------------------------------------------------------------
// using namespase
//-------------------------------------------------------------
using namespace std;

//-------------------------------------------------------------
// Static Variable
//-------------------------------------------------------------

/* nothing */

//-------------------------------------------------------------
// Static Prototype Func
//-------------------------------------------------------------

/* nothing */

//-------------------------------------------------------------
// Test code
//-------------------------------------------------------------

class testCode1 : public ::testing::Test {
protected:
};

TEST_F(testCode1, tOK_001)
{

	int a = 1;
	int b = 1;
	
	EXPECT_EQ(2, a+b);
}

TEST_F(testCode1, tNG_001)
{

	int a = 1;
	int b = 1;

	EXPECT_EQ(3, a + b);
}
