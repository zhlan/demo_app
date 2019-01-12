#include"ut_test.h"

TEST(function, min)
{
    EXPECT_EQ(4, min_n(4, 10));
    EXPECT_EQ(18, min_n(30, 18));
}

TEST(function, max)
{
    EXPECT_EQ(2, max_n(2,-1));
    EXPECT_EQ(3, max_n(2,3));
}
