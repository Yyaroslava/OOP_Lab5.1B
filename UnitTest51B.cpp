#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.1B/LongLong.h"
#include "../OOP Lab5.1B/LongLong.cpp"
#include "../OOP Lab5.1B/BadException.h"
#include "../OOP Lab5.1B/BadException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51B
{
	TEST_CLASS(UnitTest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double A(9), B(2);
			Assert::AreEqual(A * B, 18.);
		}
	};
}
