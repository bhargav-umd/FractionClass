#include "../include/fraction.hpp"
#include <gtest/gtest.h>

// testing fraction class with in data type
fraction<int> a(1, 2);
fraction<int> b(3, 4);

TEST(integerTest, addition_numerator) {
  fraction<int> sum = a + b;
  EXPECT_EQ(5, sum.getNumerator());
}
TEST(integerTest, addition_denominator) {
  fraction<int> sum = a + b;
  EXPECT_EQ(4, sum.getDenominator());
}
TEST(integerTest, mixed_addition_nume) {
  fraction<int> sum = a + 5;
  fraction<int> summ = 5 + a;
  EXPECT_EQ(11, sum.getNumerator());
  EXPECT_EQ(11, summ.getNumerator());
}

TEST(integerTest, mixed_addition_deno) {
  fraction<int> sum = a + 5;
  EXPECT_EQ(2, sum.getDenominator());
  fraction<int> summ = 5 + a;
  EXPECT_EQ(2, summ.getDenominator());
}

TEST(integerTest, subtraction_numerator) {
  fraction<int> diff = a - b;
  EXPECT_EQ(-1, diff.getNumerator());
}

TEST(integerTest, subtraction_deno) {
  fraction<int> diff = a - b;
  EXPECT_EQ(4, diff.getDenominator());
}
TEST(integerTest, mixed_sub_nume) {
  fraction<int> diff = a - 5;
  fraction<int> sub = 5 - a;
  EXPECT_EQ(-9, diff.getNumerator());
  EXPECT_EQ(9, sub.getNumerator());
}

TEST(integerTest, mixed_sub_deno) {
  fraction<int> diff = a - 5;
  EXPECT_EQ(2, diff.getDenominator());
  fraction<int> subb = 5 - a;
  EXPECT_EQ(2, subb.getDenominator());
}

TEST(integerTest, multiply_test) {
  fraction<int> mult = a * b;
  EXPECT_EQ(3, mult.getNumerator());
  EXPECT_EQ(8, mult.getDenominator());
}
TEST(integerTest, multiply_mix_test) {
  fraction<int> mult = 8 * b;
  EXPECT_EQ(6, mult.getNumerator());
  EXPECT_EQ(1, mult.getDenominator());
  fraction<int> mult_inv = b * 7;
  EXPECT_EQ(21, mult_inv.getNumerator());
  EXPECT_EQ(4, mult_inv.getDenominator());
}
TEST(integerTest, divide_test) {
  fraction<int> div = a / b;
  EXPECT_EQ(2, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
}
TEST(integerTest, divide_mix_test) {
  fraction<int> div = 8 / b;
  EXPECT_EQ(32, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
  fraction<int> div_inv = b / 8;
  EXPECT_EQ(3, div_inv.getNumerator());
  EXPECT_EQ(32, div_inv.getDenominator());
}

TEST(integerTest, greater_test) {
  bool greater = a > b;
  ASSERT_FALSE(greater);
}
TEST(integerTest, greater_mix_test) {
  bool big = a > 1;
  ASSERT_FALSE(big);
}

TEST(integerTest, equality_test) {
  // fraction<int> dd(2, 4);
  bool equally = (b < a);
  ASSERT_TRUE(equally);
}
/* TEST(integerTest, greater_mix_test_inv) { */
// auto big = 1 > a;
// // ASSERT_FALSE(big);
/* } */
