#include "../include/fraction.hpp"
#include <gtest/gtest.h>

// testing fraction class with in data type
fraction<double> aa(2, 4);
fraction<double> bb(6, 8);

TEST(DoubleTest, addition_numerator) {
  fraction<double> sum = aa + bb;
  EXPECT_EQ(5, sum.getNumerator());
}
TEST(DoubleTest, addition_denominator) {
  fraction<double> sum = aa + bb;
  EXPECT_EQ(4, sum.getDenominator());
}
TEST(DoubleTest, mixed_addition_nume) {
  fraction<double> sum = aa + 5.0;
  fraction<double> summ = 5.0 + aa;
  EXPECT_EQ(11, sum.getNumerator());
  EXPECT_EQ(11, summ.getNumerator());
}

TEST(DoubleTest, mixed_addition_deno) {
  fraction<double> sum = aa + 5.0;
  EXPECT_EQ(2, sum.getDenominator());
  fraction<double> summ = 5.0 + aa;
  EXPECT_EQ(2, summ.getDenominator());
}

TEST(DoubleTest, subtraction_numerator) {
  fraction<double> diff = aa - bb;
  EXPECT_EQ(-1, diff.getNumerator());
}

TEST(DoubleTest, subtraction_deno) {
  fraction<double> diff = aa - bb;
  EXPECT_EQ(4, diff.getDenominator());
}
TEST(DoubleTest, mixed_sub_nume) {
  fraction<double> diff = aa - 5.0;
  fraction<double> sub = 5.0 - aa;
  EXPECT_EQ(-9, diff.getNumerator());
  EXPECT_EQ(9, sub.getNumerator());
}

TEST(DoubleTest, mixed_sub_deno) {
  fraction<double> diff = aa - 5.0;
  EXPECT_EQ(2, diff.getDenominator());
  fraction<double> subb = 5.0 - aa;
  EXPECT_EQ(2, subb.getDenominator());
}

TEST(DoubleTest, multiply_test) {
  fraction<double> mult = aa * bb;
  EXPECT_EQ(3, mult.getNumerator());
  EXPECT_EQ(8, mult.getDenominator());
}
TEST(DoubleTest, multiply_mix_test) {
  fraction<double> mult = 8.0 * bb;
  EXPECT_EQ(6.0, mult.getNumerator());
  EXPECT_EQ(1.0, mult.getDenominator());
  fraction<double> mult_inv = bb * 7.0;
  EXPECT_EQ(21.0, mult_inv.getNumerator());
  EXPECT_EQ(4.0, mult_inv.getDenominator());
}
TEST(DoubleTest, divide_test) {
  fraction<double> div = aa / bb;
  EXPECT_EQ(2, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
}
TEST(DoubleTest, divide_mix_test) {
  fraction<double> div = 8.0 / bb;
  EXPECT_EQ(32, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
  fraction<double> div_inv = bb / 8.0;
  EXPECT_EQ(3, div_inv.getNumerator());
  EXPECT_EQ(32, div_inv.getDenominator());
}

TEST(DoubleTest, greater_test) {
  bool greater = aa > bb;
  ASSERT_FALSE(greater);
}
TEST(DoubleTest, greater_mix_test) {
  bool big = aa > 1.0;
  ASSERT_FALSE(big);
  bool bigg = (1.0 < aa);
  ASSERT_FALSE(bigg);
}
TEST(DoubleTest, lesser_test) {
  bool greater = aa < bb;
  ASSERT_TRUE(greater);
}
TEST(DoubleTest, lesser_mix_test) {
  bool big = aa < 1.0;
  ASSERT_TRUE(big);
  bool bigg = (1.0 < aa);
  ASSERT_FALSE(bigg);
}

TEST(DoubleTest, equality_test) {
  bool equally = (bb == aa);
  ASSERT_FALSE(equally);
}

TEST(DoubleTest, equalityMixTest) {
  bool equally = (2.0 == aa);
  ASSERT_FALSE(equally);
  bool equallly = (aa == 5.0);
  ASSERT_FALSE(equallly);
}

TEST(DoubleTest, notEqualTest) {
  bool not_equal = (aa != bb);
  ASSERT_TRUE(not_equal);
}

TEST(DoubleTest, notEqualMixTest) {
  bool not_equall = (5.0 != bb);
  ASSERT_TRUE(not_equall);
  bool not_eqalll = (aa != 5.0);
  ASSERT_TRUE(not_eqalll);
}
