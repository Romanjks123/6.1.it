#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int testArray[size] = { -7, -8, 5, -11, 10 };  // масив для тестування
			int expectedSum = -26;  // -7 + -8 + -11 = -26

			Assert::AreEqual(Sum(testArray, size), expectedSum);  // перевіряємо функцію
		}
	};
}
