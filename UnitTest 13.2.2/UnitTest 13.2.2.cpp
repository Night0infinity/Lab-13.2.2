#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 13.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const double PI = 4 * atan(1);
			double grad_A = 60;
			double grad_B = 60;
			double grad_C = 60;
			double rad_A = grad_A * (PI / 180);
			double rad_B = grad_B * (PI / 180);
			double rad_C= grad_C * (PI / 180);
			double sum_rad;
			Suma(rad_A, rad_B, rad_C, sum_rad);
			Assert::AreEqual(sum_rad, 1,5);
		}
	};
}
