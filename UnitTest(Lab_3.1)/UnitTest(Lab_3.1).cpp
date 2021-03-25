#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.1/Triad.cpp"
#include "../Lab_3.1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab31
{
	TEST_CLASS(UnitTestLab31)
	{
	public:
		
		TEST_METHOD(Test_Triad)
		{
			Triad a(5,7,8);
			Assert::AreEqual(a.Addition(), 20.0);
		}

		TEST_METHOD(Test_Triangle)
		{
			Triangle a(5, 5, 6);
			Assert::AreEqual(a.Calcul_Square(), 12.0);
		}
	};
}