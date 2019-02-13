#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};

TEST_F(CombinedNumberTests, whenEmptyListGivenEmptyStringShouldBeReturned)
{
    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, whenOneIsGivenStringOneIsReturned)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

TEST_F(CombinedNumberTests, whenOneAndOneIsGivenString11IsReturned)
{
    auto result = cn.constructGreatestNumber({1, 1});
    ASSERT_EQ(result, "11");
}

TEST_F(CombinedNumberTests, whenSortedListOfOneDigitNumbersIsGivenString11IsReturned)
{
    auto result = cn.constructGreatestNumber({8, 6, 5, 3, 2, 1, 0});
    ASSERT_EQ(result, "8653210");
}

TEST_F(CombinedNumberTests, whenUnSortedListOfOneDigitNumbersIsGivenString11IsReturned)
{
    auto result = cn.constructGreatestNumber({5, 6, 4, 3, 9, 1, 0, 1});
    ASSERT_EQ(result, "96543110");
}

