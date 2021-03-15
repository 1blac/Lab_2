#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/LINE.cpp"
#include "D:\ООП\Лабораторні 2\Project1\LINE.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LINE TEST(10, 5, 1);
			int test = TEST.function();
			Assert::AreEqual(15, test);
		}
	};
}
