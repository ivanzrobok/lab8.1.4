#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.4/lab8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab814Test
{
	TEST_CLASS(Lab814Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str2[100] = "kdsfjggggas";

			bool t;
			t = find1(str2,0);
			Assert::AreEqual(t, true);
		}
	};
}
