#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_2.4/MATRIX.h"
#include"D:\ООП\лабораторна_2.4\Laboratory_2.4\MATRIX.cpp"
#include"D:\ООП\лабораторна_2.4\Laboratory_2.4\LINE.h"
#include"D:\ООП\лабораторна_2.4\Laboratory_2.4\LINE.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix N1(3);
			N1[0][0] = 2;
			N1[0][1] = 1;
			N1[0][2] = 2;
			N1[1][0] = 1;
			N1[1][1] = 3;
			N1[1][2] = 4;
			N1[2][0] = 2;
			N1[2][1] = 5;
			N1[2][2] = 0;
			double R = N1.NormOfMatrix();
			Assert::AreEqual((double)8,R);
		}
	};
}
