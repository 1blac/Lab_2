#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_2.5/Man.h"
#include "D:\ООП\лабораторна_2.4\Laboratory_2.5\Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man x;
			x.setWeight(69);
			int y = x.getWeight();
			Assert::AreEqual(y, 69);
		}
	};
}
