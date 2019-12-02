#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\jokotoeo\Documents\Lab 11\Hash.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace std;

namespace UnitTest1
{
TEST_CLASS(Hash)
{
public:

TEST_METHOD(AddItem)
{
Hash t;

int val = t.AddItem(3);

Assert::AreEqual(3, val);

}

TEST_METHOD(GetItem)
{
	Hash t;
	int val = t.GetItem(1);

Assert::AreEqual(1, val);
}

TEST_METHOD(Recursion1)
{
FactorialByRecursion calculator;

int val = calculator.CalculateFactorial(3);

Assert::AreEqual(6, val);
}

TEST_METHOD(Recursion2)
{
FactorialByRecursion calculator;

int val = calculator.CalculateFactorial(10);

Assert::AreEqual(3628800, val);

}

TEST_METHOD(Stack1)
{
FactorialByStack calculator;

int val = calculator.CalculateFactorial(3);

Assert::AreEqual(6, val);

}

TEST_METHOD(Stack2)
{
FactorialByStack calculator;

int val = calculator.CalculateFactorial(10);

Assert::AreEqual(3628800, val);


}

TEST_METHOD(UserDefinedExceptionTest1)
{

std::string status = CallSimpleExceptionMethod(1);
Assert::AreEqual(std::string("I got Exception 1"), status);

}

TEST_METHOD(UserDefinedExceptionTest2)
{


std::string status = CallSimpleExceptionMethod(2);
Assert::AreEqual(std::string("I got Exception 2"), status);

}

TEST_METHOD(UserDefinedExceptionTest3)
{

std::string status = CallSimpleExceptionMethod(3);
Assert::AreEqual(std::string("I got Exception 3"), status);

}

TEST_METHOD(UserDefinedExceptionTest4)
{

std::string status = CallSimpleExceptionMethod(4);
Assert::AreEqual(std::string("I did not get an Exception"), status);

}


};
}