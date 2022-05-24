#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.5_oop/Car.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest15::TestMethod1() 
	{
		Car t;
		t.Init("name", 4, 100);
		Assert::AreEqual("name", t.getBrand().c_str());;
		 
	}
}
