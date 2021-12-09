#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-13.2.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a = MAX(ABS(-5), 1);
			Assert::AreEqual(a, 5);
		}
	};
}