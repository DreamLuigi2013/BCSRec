#include "pch.h"
#include "CppUnitTest.h"
extern "C"
{
#include "C:\Users\reisl\Downloads\CSCN71020_A2\CSCN71020_A2\BCSRec\functions.h"
}
// It only needs to remember one rectangle at a time
// Rectangle dimensions are to be measured using integers
// Both the length and width of the rectangle is to be limited to the range of values 1 to 99, inclusive

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(PerimeterOf23Length_21WidthIs88)
		{
			int width = 21;
			int length = 23;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(88, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf99Length_34Widthis266)
		{
			int width = 34;
			int length = 99;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(266, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf34Length_99Widthis266)
		{
			int width = 99;
			int length = 34;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(266, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf34Length_100WidthisError)
		{
			int width = 100;
			int length = 34;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(66, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf100Length_34WidthisError)
		{
			int width = 34;
			int length = 100;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(66, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_34WidthisError)
		{
			int width = 34;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(70, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf34Length_1WidthisError)
		{
			int width = 1;
			int length = 34;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(70, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf0Length_1WidthisError)
		{
			int width = 1;
			int length = 0;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_0WidthisError)
		{
			int width = 0;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_Neg1WidthisError)
		{
			int width = -1;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOfNeg1Length_1WidthisError)
		{
			int width = 1;
			int length = -1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOfDecimalLength_1WidthisError)
		{
			int width = 1;
			double length = 1.1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(4, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_DecimalWidthisError)
		{
			double width = 1.1;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(4, actual_perimeter);
		}
	};
}
