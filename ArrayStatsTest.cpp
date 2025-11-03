#include "pch.h" 
#include "ArrayStats.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArrayStatsTests
{
    TEST_CLASS(ArrayStatsTest)
    {
    public:

        TEST_METHOD(TestMin)
        {
            std::vector<int> data = { 5, 3, 8, 1, 9 };
            Assert::AreEqual(1, ArrayStats::min(data));
        }

        TEST_METHOD(TestMax)
        {
            std::vector<int> data = { 5, 3, 8, 1, 9 };
            Assert::AreEqual(9, ArrayStats::max(data));
        }

        TEST_METHOD(TestAverage)
        {
            std::vector<int> data = { 1, 2, 3, 4, 5 };
            Assert::AreEqual(3.0, ArrayStats::average(data), 0.001);
        }

        TEST_METHOD(TestIsSorted_True)
        {
            std::vector<int> data = { 1, 2, 3 };
            Assert::IsTrue(ArrayStats::isSorted(data));
        }

        TEST_METHOD(TestIsSorted_False)
        {
            std::vector<int> data = { 3, 1, 2 };
            Assert::IsFalse(ArrayStats::isSorted(data));
        }
    };
}