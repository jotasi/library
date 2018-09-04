#include "../inc/sum.hpp"
#include "gtest/gtest.h"

class SumTest : public ::testing::Test {
  public:
    Sum sum;
    SumTest() : sum{} {};
};

TEST_F(SumTest, is_initialized_with_zero) {
    EXPECT_EQ(sum.get_current_sum(), 0);
}

TEST_F(SumTest, a_positive_int_can_be_added) {
    sum.add(1);
    EXPECT_EQ(sum.get_current_sum(), 1);
}

TEST_F(SumTest, a_negative_int_can_be_added) {
    sum.add(-1);
    EXPECT_EQ(sum.get_current_sum(), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}