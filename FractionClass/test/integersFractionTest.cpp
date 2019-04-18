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
 * @file integersFractionTest.cpp
 * @brief  Includes test cases for all functions in fraction class using int
 *         data type
 * @author Bhargav Dandamudi
 * @version 1
 * @date 2019-04-18
 */

#include "../include/fraction.hpp"
#include <gtest/gtest.h>

// creating two fractions to be used in majority of the test cases
fraction<int> a(2, 4);
fraction<int> b(6, 8);

/* ----------------------------------------------------------------*/
/**
 * @brief  check we can add two fractions
 *
 * @param integerTest
 * @param addition_numerator
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, addition_numerator) {
  fraction<int> sum = a + b;
  EXPECT_EQ(5, sum.getNumerator());
  fraction<int> na(-3, 4);
  fraction<int> nsum = na + b;
  EXPECT_EQ(0, nsum.getNumerator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check denominator after addition
 *
 * @param integerTest
 * @param addition_denominator
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, addition_denominator) {
  fraction<int> sum = a + b;
  EXPECT_EQ(4, sum.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check a+5; (fraction<U> + U) and (U +fraction<U>)
 *
 * @param integerTest
 * @param mixed_addition_nume
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, mixed_addition_nume) {
  fraction<int> sum = a + 5;
  fraction<int> summ = 5 + a;
  EXPECT_EQ(11, sum.getNumerator());
  EXPECT_EQ(11, summ.getNumerator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  check fraction<U> + u and U+ fraction<U>
 *
 * @param integerTest
 * @param mixed_addition_deno
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, mixed_addition_deno) {
  fraction<int> sum = a + 5;
  EXPECT_EQ(2, sum.getDenominator());
  fraction<int> summ = 5 + a;
  EXPECT_EQ(2, summ.getDenominator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  check fractions subtraction numerator results
 *
 * @param integerTest
 * @param subtraction_numerator
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, subtraction_numerator) {
  fraction<int> diff = a - b;
  EXPECT_EQ(-1, diff.getNumerator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  denominator with Subtraction of  two fractions result
 *
 * @param integerTest
 * @param subtraction_deno
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, subtraction_deno) {
  fraction<int> diff = a - b;
  EXPECT_EQ(4, diff.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  to check fraction<U> - U | U - fraction<U>
 *
 * @param integerTest
 * @param mixed_sub_nume
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, mixed_sub_nume) {
  fraction<int> diff = a - 5;
  fraction<int> sub = 5 - a;
  EXPECT_EQ(-9, diff.getNumerator());
  EXPECT_EQ(9, sub.getNumerator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  to check fraction<U> - U | U - fraction<U> result denominator
 *
 * @param integerTest
 * @param mixed_sub_dino
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, mixed_sub_deno) {
  fraction<int> diff = a - 5;
  EXPECT_EQ(2, diff.getDenominator());
  fraction<int> subb = 5 - a;
  EXPECT_EQ(2, subb.getDenominator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  product test
 *
 * @param integerTest
 * @param multiply_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, multiply_test) {
  fraction<int> mult = a * b;
  EXPECT_EQ(3, mult.getNumerator());
  EXPECT_EQ(8, mult.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  Product of U and fraction<U>
 *
 * @param integerTest
 * @param multiply_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, multiply_mix_test) {
  fraction<int> mult = 8 * b;
  EXPECT_EQ(6, mult.getNumerator());
  EXPECT_EQ(1, mult.getDenominator());
  fraction<int> mult_inv = b * 7;
  EXPECT_EQ(21, mult_inv.getNumerator());
  EXPECT_EQ(4, mult_inv.getDenominator());
  /* ----------------------------------------------------------------*/
  /**
   * @brief  Division Test
   *
   * @param integerTest
   * @param divide_test
   */
  /* ----------------------------------------------------------------*/
}
TEST(integerTest, divide_test) {
  fraction<int> div = a / b;
  EXPECT_EQ(2, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check division as fraction<U> / U ;U/fraction<U>
 *
 * @param integerTest
 * @param divide_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, divide_mix_test) {
  fraction<int> div = 8 / b;
  EXPECT_EQ(32, div.getNumerator());
  EXPECT_EQ(3, div.getDenominator());
  fraction<int> div_inv = b / 8;
  EXPECT_EQ(3, div_inv.getNumerator());
  EXPECT_EQ(32, div_inv.getDenominator());
}

/* ----------------------------------------------------------------*/
/**
 * @brief  to check which fraction is big
 *
 * @param integerTest
 * @param greater_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, greater_test) {
  bool greater = a > b;
  ASSERT_FALSE(greater);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  fraction and number comparision
 *
 * @param integerTest
 * @param greater_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, greater_mix_test) {
  bool big = a > 1;
  ASSERT_FALSE(big);
  bool bigg = (1 < a);
  ASSERT_FALSE(bigg);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  to check if < is working
 *
 * @param integerTest
 * @param lesser_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, lesser_test) {
  bool greater = a < b;
  ASSERT_TRUE(greater);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  checking a/b < c and c < a/b
 *
 * @param integerTest
 * @param lesser_mix_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, lesser_mix_test) {
  bool big = a < 1;
  ASSERT_TRUE(big);
  bool bigg = (1 < a);
  ASSERT_FALSE(bigg);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b == c/d fractions equality test
 *
 * @param integerTest
 * @param equality_test
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, equality_test) {
  bool equally = (b == a);
  ASSERT_FALSE(equally);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b == c; c == a/b
 *
 * @param integerTest
 * @param equalityMixTest
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, equalityMixTest) {
  bool equally = (2 == a);
  ASSERT_FALSE(equally);
  bool equallly = (a == 5);
  ASSERT_FALSE(equallly);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b !=c/d
 *
 * @param integerTest
 * @param notEqualTest
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, notEqualTest) {
  bool not_equal = (a != b);
  ASSERT_TRUE(not_equal);
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b!=c;a!=c/d
 *
 * @param integerTest
 * @param notEqualMixTest
 */
/* ----------------------------------------------------------------*/
TEST(integerTest, notEqualMixTest) {
  bool not_equall = (5 != b);
  ASSERT_TRUE(not_equall);
  bool not_eqalll = (a != 5);
  ASSERT_TRUE(not_eqalll);
}
