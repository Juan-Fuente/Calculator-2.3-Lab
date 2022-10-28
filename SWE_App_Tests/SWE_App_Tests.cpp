#include "pch.h"
#include "CppUnitTest.h"
#include "../SWE_App/CalculatorProcessor.h"
#include "../SWE_App/ButtonFactory.h"
#include "../SWE_App/Main.h"
#include "../SWE_App/ExecuteClass.h"
#include "../SWE_App/Frame.h"
#include "../SWE_App/Separator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SWEAppTests
{
	TEST_CLASS(SWEAppTests)
	{
	public:

		TEST_METHOD(ObtainAddition)
		{

			int ans = CalculatorProcessor::Add(2, 2);
			Assert::AreEqual(4, ans);
		}

		TEST_METHOD(ObtainSubtraction)
		{
			int ans = CalculatorProcessor::Minus(2, 2);
			Assert::AreEqual(0, ans);
		}

		TEST_METHOD(ObtainDivision)
		{
			int ans = CalculatorProcessor::Divide(40, 2);
			Assert::AreEqual(20, ans);
		}

		TEST_METHOD(ObtainMultiplication)
		{
			int ans = CalculatorProcessor::Multiply(2, 6);
			Assert::AreEqual(12, ans);
		}
		
		TEST_METHOD(ObtainTan)
		{
			double ans = CalculatorProcessor::Tan(2);
			Assert::AreEqual(0.03492, ans);
		}

		TEST_METHOD(ObtainCos)
		{
			double ans = CalculatorProcessor::Cos(2);
			Assert::AreEqual(0.99939082, ans);
		}

		TEST_METHOD(ObtainAddition)
		{

			int ans = CalculatorProcessor::Add(5, 7);
			Assert::AreEqual(12, ans);
		}

		TEST_METHOD(ObtainSin)
		{
			double ans = CalculatorProcessor::Sin(2);
			Assert::AreEqual(0.0348994, ans);
		}

		TEST_METHOD(ObtainMod)
		{
			int ans = CalculatorProcessor::Mod(2,4);
			Assert::AreEqual(2, ans);
		}


		TEST_METHOD(ObtainClear)
		{
			int ans = CalculatorProcessor::ClearNow(2);
			Assert::AreEqual(0, ans);
		}


	};
}
