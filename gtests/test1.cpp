#include "gtest/gtest.h"
#include "../adder.h"

TEST(AdderTestSuite, TwoPlusTwo)
{
    int res = adder(2, 2);
    ASSERT_EQ(res, 4);

}