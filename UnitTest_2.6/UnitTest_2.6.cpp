#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_2.6/Man.h"
#include "D:\ООП\лабораторна_2.4\Laboratory_2.6\Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student::Man x;
			x.setWeight(69);
			int y = x.getWeight();
			Assert::AreEqual(y, 69);
		}
		
	};
}
