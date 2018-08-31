#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

// library.h is ANSI C (do not use C++ name mangling)
extern "C" {
    #include "library.h"
}

using namespace testing;

TEST(Tests, add_positive_numbers)
{
    EXPECT_EQ(4, add(2, 2));
    EXPECT_EQ(7, add(3, 4));
}

TEST(Tests, add_with_negative_numbers)
{
    EXPECT_EQ(-2, add(-4, 2));
    EXPECT_EQ(-10, add(-8, -2));
}
