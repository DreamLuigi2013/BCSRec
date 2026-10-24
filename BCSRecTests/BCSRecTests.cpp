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
		// For Perimeter
		TEST_METHOD(PerimeterOf23Length_21WidthIs88)
		{
			int width = 21;
			int length = 23;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(88, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf0Length_1Widthis0)
		{
			int width = 1;
			int length = 0;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(2, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_0Widthis0)
		{
			int width = 0;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(2, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_Neg1Widthis0)
		{
			int width = -1;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOfNeg1Length_1Widthis0)
		{
			int width = 1;
			int length = -1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(0, actual_perimeter);
		}
		TEST_METHOD(PerimeterOfDecimalLength_1Widthis4)
		{
			int width = 1;
			double length = 1.1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(4, actual_perimeter);
		}
		TEST_METHOD(PerimeterOf1Length_DecimalWidthis4)
		{
			double width = 1.1;
			int length = 1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(4, actual_perimeter);
		}
		TEST_METHOD(PerimeterOfDecimalLength_DecimalWidthis4)
		{
			double width = 1.1;
			int length = 1.1;

			int actual_perimeter = getPerimeter(length, width);

			Assert::AreEqual(4, actual_perimeter);
		}

		// For Area
		TEST_METHOD(AreaOf2Length_4WidthIs8)
		{
			int width = 4;
			int length = 2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(8, actual_area);
		}
		TEST_METHOD(AreaOfNeg2Length_4WidthIsNeg8)
		{
			int width = 4;
			int length = -2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(-8, actual_area);
		}
		TEST_METHOD(AreaOf2Length_Neg4WidthIsNeg8)
		{
			int width = -4;
			int length = 2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(-8, actual_area);
		}
		TEST_METHOD(AreaOfNeg2Length_Neg4WidthIs8)
		{
			int width = -4;
			int length = -2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(8, actual_area);
		}
		TEST_METHOD(AreaOfDecimalLength_4WidthIs8)
		{
			int width = 4;
			double length = 2.2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(8, actual_area);
		}
		TEST_METHOD(AreaOf2Length_DecimalWidthIs8)
		{
			double width = 4.4;
			int length = 2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(8, actual_area);
		}
		TEST_METHOD(AreaOfDecimalLength_DecimalWidthIs8)
		{
			double width = 4.4;
			int length = 2.2;

			int actual_area = getArea(length, width);

			Assert::AreEqual(8, actual_area);
		}
		// Set Length
		TEST_METHOD(setLength8)
		{
			
			int actual_length = setLength(8);

			Assert::AreEqual(8, actual_length);
		}
		TEST_METHOD(setLength1)
		{
			
			int actual_length = setLength(1);

			Assert::AreEqual(1, actual_length);
		}
		TEST_METHOD(setLength0)
		{
			
			int actual_length = setLength(0);

			Assert::AreEqual(1, actual_length);
		}
		TEST_METHOD(setLength99)
		{
			
			int actual_length = setLength(99);

			Assert::AreEqual(99, actual_length);
		}
		TEST_METHOD(setLength100)
		{
			
			int actual_length = setLength(100);

			Assert::AreEqual(1, actual_length);
		}
		TEST_METHOD(setLengthDecimal)
		{
			
			int actual_length = setLength(1.1);

			Assert::AreEqual(1, actual_length);
		}
		TEST_METHOD(setLengthNegative)
		{
			
			int actual_length = setLength(-5);

			Assert::AreEqual(1, actual_length);
		}
		TEST_METHOD(setLengthSpecialChar)
		{
			
			int actual_length = setLength('$');

			Assert::AreEqual(1, actual_length);
		}
	};
}
