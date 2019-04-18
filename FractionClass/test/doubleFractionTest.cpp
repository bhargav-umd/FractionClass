/* Copyright (C)
 * 2019 - Bhargav Dandamudi
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the 'Software'), to deal in the Software without
 * restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit
 * persons to whom the Software is furnished to do so,subject to
 * the following conditions:
 * The above copyright notice and this permission notice shall
 * be included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED ''AS IS'', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM,OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
/**
 * @file doubleFractionTest.cpp
 * @brief  Testing fraction class functions with double data type
 * @author Bhargav Dandamudi
 * @version 1
 * @date 2019-04-18
 */
#include "../include/fraction.hpp"
#include <gtest/gtest.h>

// creating two fractions of type double, to be used in majority of the test
// cases
fraction<double> aa(2, 4);
fraction<double> bb(6, 8);

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b +c/d
 *
 * @param DoubleTest
 * @param addition_numerator
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, addition_numerator) {
  fraction<double> sum = aa + bb;
  EXPECT_EQ(5, sum.getNumerator());
}
TEST(DoubleTest, addition_denominator) {
  fraction<double> sum = aa + bb;
  EXPECT_EQ(4, sum.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b +c ; c+a/b
 *
 * @param DoubleTest
 * @param mixed_addition_nume
 */
/* ----------------------------------------------------------------*/
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

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b -c/d
 *
 * @param DoubleTest
 * @param subtraction_numerator
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, subtraction_numerator) {
  fraction<double> diff = aa - bb;
  EXPECT_EQ(-1, diff.getNumerator());
}

TEST(DoubleTest, subtraction_deno) {
  fraction<double> diff = aa - bb;
  EXPECT_EQ(4, diff.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b-c;c-a/b
 *
 * @param DoubleTest
 * @param mixed_sub_nume
 */
/* ----------------------------------------------------------------*/
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

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b * c/d
 *
 * @param DoubleTest
 * @param multiply_test
 */
/* ----------------------------------------------------------------*/
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
/* ----------------------------------------------------------------*/
/**
 * @brief  (a/b) / (c/d)
 *
 * @param DoubleTest
 * @param divide_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, divide_test) {
  fraction<double> div = aa / bb;
  EXPECT_EQ(2, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b / (c) ; (c) / (a/b)
 *
 * @param DoubleTest
 * @param divide_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, divide_mix_test) {
  fraction<double> div = 8.0 / bb;
  EXPECT_EQ(32, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
  fraction<double> div_inv = bb / 8.0;
  EXPECT_EQ(3, div_inv.getNumerator());
  EXPECT_EQ(32, div_inv.getDenominator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b > c/d
 *
 * @param DoubleTest
 * @param greater_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, greater_test) {
  bool greater = aa > bb;
  ASSERT_FALSE(greater);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b > c; c > a/b
 *
 * @param DoubleTest
 * @param greater_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, greater_mix_test) {
  bool big = aa > 1.0;
  ASSERT_FALSE(big);
  bool bigg = (1.0 < aa);
  ASSERT_FALSE(bigg);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b < c/d
 *
 * @param DoubleTest
 * @param lesser_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, lesser_test) {
  bool greater = aa < bb;
  ASSERT_TRUE(greater);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b < c; c<a/b
 *
 * @param DoubleTest
 * @param lesser_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, lesser_mix_test) {
  bool big = aa < 1.0;
  ASSERT_TRUE(big);
  bool bigg = (1.0 < aa);
  ASSERT_FALSE(bigg);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b == c/d
 *
 * @param DoubleTest
 * @param equality_test
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, equality_test) {
  bool equally = (bb == aa);
  ASSERT_FALSE(equally);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b ==c;c==a/b
 *
 * @param DoubleTest
 * @param equalityMixTest
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, equalityMixTest) {
  bool equally = (2.0 == aa);
  ASSERT_FALSE(equally);
  bool equallly = (aa == 5.0);
  ASSERT_FALSE(equallly);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b !=c/d
 *
 * @param DoubleTest
 * @param notEqualTest
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, notEqualTest) {
  bool not_equal = (aa != bb);
  ASSERT_TRUE(not_equal);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b !=c ;c!=a/b
 *
 * @param DoubleTest
 * @param notEqualMixTest
 */
/* ----------------------------------------------------------------*/
TEST(DoubleTest, notEqualMixTest) {
  bool not_equall = (5.0 != bb);
  ASSERT_TRUE(not_equall);
  bool not_eqalll = (aa != 5.0);
  ASSERT_TRUE(not_eqalll);
}
