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
 * @file fraction.hpp
 * @brief   Fraction Class file with definitions and declarations,
 *          (generally definitions and declarations should be separated in
 *          different files, here using templates to define/declare functions)
 *          Overloaded addition, subtraction,multiply,division,greater/lesser
 *          than,equality/non equality operators to perform appropriate actions
 *          with fractions.Also has display function and overloaded >> and <<
 *          functions to show output and get input respectively.
 *          Also includes findRemainder and greatest Common divisor function
 * @author Bhargav Dandamudi
 * @version 1
 * @date 2019-04-18
 */
#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/* ----------------------------------------------------------------*/
/**
 * @brief  To find the Remainder if first is divided by second, Used subtraction
 *          method to find remainder(mod).
 *
 * @param T first number (dividend)
 * @param T second number (divisor)
 *
 * @return remainder
 */
/* ----------------------------------------------------------------*/
template <typename T> T findRemainder(T, T);
/* ----------------------------------------------------------------*/
/**
 * @brief  To find greatest common
 *
 * @param input number one
 * @param  input number two
 *
 * @return greatest common divisor for number one and two
 */
/* ----------------------------------------------------------------*/
template <typename T> T greatestCommonDivisor(const T &, const T &);

/* ----------------------------------------------------------------*/
/**
 * @brief  Fraction class declaration mentioning all members
 *
 * @tparam T template parameter
 */
/* ----------------------------------------------------------------*/
template <typename T> class fraction;

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operators + declaration
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return sum of two fractions
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator+(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator - declaration
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return difference of two input fractions
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator * declaration
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return product of two input fractions
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator / declaration
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return division of two input fractions
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const fraction<T> &first, const fraction<T> &second);

template <typename T>
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator + for { T + fraction<T> }
 *
 * @param first
 * @param second
 *
 * @return sum of T and fraction<T>
 */
/* ----------------------------------------------------------------*/
fraction<T> operator+(const T &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator - for { T - fraction<T> }
 *
 * @param first
 * @param second
 *
 * @return difference of T and fraction<T>
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const T &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator * for { T * fraction<T> }
 *
 * @param first
 * @param second
 *
 * @return product of T and fraction<T>
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const T &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator / for { T / fraction<T> }
 *
 * @param first
 * @param second
 *
 * @return division of T and fraction<T>
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const T &first, const fraction<T> &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator + for { fraction<T> + T}
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return sum of fraction<T> and T
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator - for { fraction<T> - T}
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return difference of fraction<T> and T
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator * for { fraction<T> * T}
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return product of fraction<T> and T
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator / for { fraction<T> / T}
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return division of fraction<T> and T
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator == to check equality of two fractions
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return bool true if equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator==(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator != to check non equality of two fractions
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return bool true if not equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator > to check which is greated between two
 * fractions
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return bool true if first is greater than second else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator>(const fraction<T> &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator < to check which is lesser between two fractions
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return bool true if first is less than second else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator<(const fraction<T> &first, const fraction<T> &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator == to check equality of fraction<T> and T
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true of fraction<T> and T are equal
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator==(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator != to check equality of fraction<T> and T
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return false of fraction<T> and T are equal else true
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator > to check if fraction<T> is greated than T
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true of fraction<T> is greater than T else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator>(const fraction<T> &first, const T &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator < to check if fraction<T> is lesser than T
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true if fraction<T> is less than T else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator<(const fraction<T> &first, const T &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator == to check equality of T and fraction<T>
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true if fraction<T> and T are equal
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator==(const T &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator != to check equality of T and fraction<T>
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return false if fraction<T> and T are equal else true
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator!=(const T &first, const fraction<T> &second);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator > to check if T is greater than fraction<T>
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true if T is greater than fraction<T> else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator>(const T &first, const fraction<T> &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator < to check if T is less than fraction<T>
 *
 * @tparam T template parameter
 * @param first
 * @param second
 *
 * @return true if T is less than fraction<T> else false
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator<(const T &first, const fraction<T> &second);

/* ----------------------------------------------------------------*/
/**
 * @brief  overloading operator >> to show output using ostream
 *
 * @tparam T
 * @param out
 * @param a
 *
 * @return ostream if we have any output fraction to be shown
 */
/* ----------------------------------------------------------------*/
template <typename T>
std::ostream &operator<<(std::ostream &out, const fraction<T> &a);
/* ----------------------------------------------------------------*/
/**
 * @brief  overloading << operator for input
 *
 * @tparam T
 * @param in
 * @param a
 *
 * @return istream if we need to input any fraction
 */
/* ----------------------------------------------------------------*/
template <typename T>
std::istream &operator>>(std::istream &in, fraction<T> &a);

/* ----------------------------------------------------------------*/
/**
 * @brief  Fraction class declaration with all memebers
 *
 * @tparam T
 */
/* ----------------------------------------------------------------*/
template <typename T> class fraction {
private:
  T numerator, denominator; // private variable of the class

public:
  /* ----------------------------------------------------------------*/
  /**
   * @brief  default constructor
   */
  /* ----------------------------------------------------------------*/
  fraction<T>();
  /* ----------------------------------------------------------------*/
  /**
   * @brief  Paremeterised constructor to convert T to fraction<T>
   *
   * @param T ( basically numberator for the fraction, where denomiator is 1
   */
  /* ----------------------------------------------------------------*/
  fraction<T>(const T &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  Parameterized constructor to form fraction
   *
   * @param Numerator of the fraction
   * @param Denominator of the fraction
   */
  /* ----------------------------------------------------------------*/
  fraction<T>(const T &, const T &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  Numerator getter function
   *
   * @return numerator of the fraction(this)
   */
  /* ----------------------------------------------------------------*/
  T getNumerator() const;
  /* ----------------------------------------------------------------*/
  /**
   * @brief  getter function for denominator
   *
   * @return dinominator of the fraction (this)
   */
  /* ----------------------------------------------------------------*/
  T getDenominator() const;

  /* ----------------------------------------------------------------*/
  /**
   * @brief  Numerator setter function
   *
   * @param numerator to be set
   */
  /* ----------------------------------------------------------------*/
  void setNumerator(const T &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  denominator setter function
   *
   * @param denominator to be set
   */
  /* ----------------------------------------------------------------*/
  void setDenominator(const T &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  TO display fraction value
   */
  /* ----------------------------------------------------------------*/
  void display();
  /* ----------------------------------------------------------------*/
  /**
   * @brief  To reduce the value of the fraction to minimal
   */
  /* ----------------------------------------------------------------*/
  void simplifyFractions();

  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator + ; (a/b +c/d)
   *
   * @param U template parameter
   * @param fraction first
   * @param fraction second
   *
   * @return sum
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator+(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator - (a/b - c/d)
   *
   * @param U template parameter
   * @param fraction first
   * @param fraction second
   *
   * @return difference
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator-(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator * ; (a/b * c/d)
   *
   * @param U template parameter
   * @param fraction first
   * @param fraction second
   *
   * @return product
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator*(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator / ; ( (a/b) / (c/d) )
   *
   * @param U template parameter
   * @param fraction first
   * @param fraction second
   *
   * @return division solution
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator/(const fraction<U> &, const fraction<U> &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator + ( a/b +c)
   *
   * @param U template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return sum
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator+(const fraction<U> &, const U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator - ( a/b -c )
   *
   * @param U template parameter
   * @param fraction first
   * @param  number of type U
   *
   * @return difference
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator-(const fraction<U> &, const U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator * ( a/b * c )
   *
   * @param U template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return product
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator*(const fraction<U> &, const U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator / ( (a/b) / c )
   *
   * @param U template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return division solution
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator/(const fraction<U> &, const U &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator + ( a + c/d)
   *
   * @param U template parameter
   * @param number of type U
   * @param fraction second
   *
   * @return sum
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator+(const U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator -; (a -c/d)
   *
   * @param U template parameter
   * @param number of type U
   * @param fraction second
   *
   * @return difference
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator-(const U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator * ; (a * c/d)
   *
   * @param U template parameter
   * @param number of type U
   * @param fraction second
   *
   * @return product
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator*(const U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  friend function to be able to give inputs as fraction(objects of
   *         the class) ,overloading operator / ; ( a / (c/d))
   *
   * @param U template parameter
   * @param number of type U
   * @param fraction second
   *
   * @return division result
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend fraction<U> operator/(const U &, const fraction<U> &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  To compare fraction and number of type U
   *          overloading operator == ( a/b == c/d)
   *
   * @tparam U Template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return bool true if equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend bool operator==(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  To compare fraction and number of type U
   *          overloading operator != ( a/b != c/d )
   *
   * @tparam U Template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return bool true if not equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend bool operator!=(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  To compare fraction and number of type U
   *          overloading operator > ; ( a/b > c/d )
   *
   * @tparam U Template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return bool true if greater else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend bool operator>(const fraction<U> &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  To compare fraction and number of type U
   *          overloading operator < ; (a/b < c/d)
   *
   * @tparam U Template parameter
   * @param fraction first
   * @param number of type U
   *
   * @return bool true if less else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend bool operator<(const fraction<U> &, const fraction<U> &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  to compare fraction and number of type U; (a/b ==c)
   *
   * @tparam U template parameter U
   * @param fraction
   * @param number of type U
   *
   * @return bool true if equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator==(const fraction<U> &, U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  to compare fraction and number of type U; (a/b !=c)
   *
   * @tparam U template parameter U
   * @param fraction
   * @param number of type U
   *
   * @return bool true if not equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator!=(const fraction<U> &, U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  to compare fraction and number of type U; (a/b > c)
   *
   * @tparam U template parameter U
   * @param fraction
   * @param number of type U
   *
   * @return bool true if greater else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator>(const fraction<U> &, U &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  to compare fraction and number of type U; (a/b <c)
   *
   * @tparam U template parameter U
   * @param fraction
   * @param number of type U
   *
   * @return bool true if lesser else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator<(const fraction<U> &, const U &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  TO compare number of type U and fraction ; (a == c/d)
   *
   * @tparam U
   * @param number of type U
   * @param fraction<U>
   *
   * @return true if equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator==(const U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  TO compare number of type U and fraction ; (a != c/d)
   *
   * @tparam U
   * @param number of type U
   * @param fraction<U>
   *
   * @return true if not equal else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator!=(const U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  TO compare number of type U and fraction ; (a > c/d)
   *
   * @tparam U
   * @param number of type U
   * @param fraction<U>
   *
   * @return true if greater else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator>(U &, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  TO compare number of type U and fraction ; (a < c/d)
   *
   * @tparam U
   * @param number of type U
   * @param fraction<U>
   *
   * @return true if lesser else false
   */
  /* ----------------------------------------------------------------*/
  template <typename U> friend bool operator<(U &, const fraction<U> &);

  /* ----------------------------------------------------------------*/
  /**
   * @brief  To show output in ostream
   *
   * @tparam U Template parameter U
   * @param out
   * @param fraction
   *
   * @return ostream
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend std::ostream &operator<<(std::ostream &out, const fraction<U> &);
  /* ----------------------------------------------------------------*/
  /**
   * @brief  to take input of fraction
   *
   * @tparam U
   * @param in istream
   * @param fraction<U>
   *
   * @return istream
   */
  /* ----------------------------------------------------------------*/
  template <typename U>
  friend std::istream &operator>>(std::istream &in, fraction<U> &);
};

/* ----------------------------------------------------------------*/
/**
 * @brief  Finding remainder using subtraction method, subract until we get
 *          negative value, not using const and & , as we are changing values
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return remainder if first is divided by second
 */
/* ----------------------------------------------------------------*/
template <typename T> T findRemainder(T first, T second) {
  if (first < 0)
    first = -first;
  if (second < 0)
    second = -second;

  // finding mod by repeated subtraction
  T mod = first;
  while (mod >= second)
    mod = mod - second;

  // for negative numbers
  if (first < 0)
    return -mod;

  return mod;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  To GCD of two numbers using euclids algorithm, recursive method
 *
 * @tparam T
 * @param numerator
 * @param denominator
 *
 * @return number of type T with GCD value
 */
/* ----------------------------------------------------------------*/
template <typename T>
T greatestCommonDivisor(const T &numerator, const T &denominator) {
  if (findRemainder(numerator, denominator) == 0) {
    return denominator;
  }
  return greatestCommonDivisor(denominator,
                               findRemainder(numerator, denominator));
}

/* ----------------------------------------------------------------*/
/**
 * @brief  default constructor
 *
 * @tparam T template parameter to define type of data in fraction
 */
/* ----------------------------------------------------------------*/
template <typename T> fraction<T>::fraction() {
  this->numerator = 0;
  this->denominator = 1;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/1 Parameterized constructor
 *
 * @tparam T
 * @param number (a)
 */
/* ----------------------------------------------------------------*/
template <typename T> fraction<T>::fraction(const T &number) {
  this->numerator = number;
  this->denominator = 1;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b = numer/denomin , Parameterized constructor
 *          with condition to check if we get 0 as denominator by any chance;
 *
 * @tparam T data type
 * @param numer
 * @param denomin
 */
/* ----------------------------------------------------------------*/
template <typename T> fraction<T>::fraction(const T &numer, const T &denomin) {
  this->numerator = numer;
  this->denominator = denomin;
  if (this->denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }
}

/* ----------------------------------------------------------------*/
/**
 * @brief  to reduce the fration to its minimum i.,e (2/4) = (1/2)
 *
 * @tparam T
 */
/* ----------------------------------------------------------------*/
template <typename T> void fraction<T>::simplifyFractions() {
  if (this->denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }

  T gcd = greatestCommonDivisor(this->numerator, this->denominator);
  this->numerator /= gcd;
  this->denominator /= gcd;
  if (this->denominator < 0) {
    this->denominator = abs(this->denominator);
    this->numerator = -this->numerator;
  }
  //  return _fract;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  Numerator getter
 *
 * @tparam T
 *
 * @return numerator value
 */
/* ----------------------------------------------------------------*/
template <typename T> T fraction<T>::getNumerator() const {
  return this->numerator;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  Denominator getter
 *
 * @tparam T
 *
 * @return get denominator
 */
/* ----------------------------------------------------------------*/
template <typename T> T fraction<T>::getDenominator() const {
  return this->denominator;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  Set Numerator
 *
 * @tparam T
 * @param numer
 */
/* ----------------------------------------------------------------*/
template <typename T> void fraction<T>::setNumerator(const T &numer) {
  this->numerator = numer;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  Set Denominator
 *
 * @tparam T
 * @param dinom
 */
/* ----------------------------------------------------------------*/
template <typename T> void fraction<T>::setDenominator(const T &dinom) {
  this->denominator = dinom;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  To show fraction
 *
 * @tparam T
 */
/* ----------------------------------------------------------------*/
template <typename T> void fraction<T>::display() {
  std::cout << this->numerator << "/" << this->denominator << std::endl;
}

template <typename T>
/* ----------------------------------------------------------------*/
/**
 * @brief  addition of fractions a/b + c/d = (a*d +b*c)/ (bd)
 *
 * @param first
 * @param second
 *
 * @return sum
 */
/* ----------------------------------------------------------------*/
fraction<T> operator+(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;

  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();

  _fract.setNumerator(a * d + c * b);
  _fract.setDenominator(b * d);
  _fract.simplifyFractions();
  return _fract;
}
/* ----------------------------------------------------------------*/
/**
 * @brief a/b + c
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return sum
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second) {
  return first + fraction<T>(second);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a + c/d
 *
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return sum
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator+(const T &first, const fraction<T> &second) {
  return fraction<T>(first) + second;
}
/* ----------------------------------------------------------------*/
/**
 * @brief   a/b - c/d = (ad - bc) /bd ;difference
 *
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return difference
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  _fract.setNumerator(a * d - c * b);
  _fract.setDenominator(b * d);
  _fract.simplifyFractions();
  return _fract;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b -c
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return difference
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second) {
  return first - fraction<T>(second, 1);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a -c/d
 *
 * @tparam T
 * @param first
 * @param second
 *
 * @return difference
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator-(const T &first, const fraction<T> &second) {
  return fraction<T>(first) - second;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  product of two fractions a/b * c/d = ac/bd
 *
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return product
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  _fract.setNumerator(a * c);
  _fract.setDenominator(b * d);
  _fract.simplifyFractions();
  return _fract;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b * c
 *
 * @tparam T
 * @param first a/b
 * @param second c
 *
 * @return product
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second) {
  return first * fraction<T>(second);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a * c/d = ac/d
 *
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return product
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator*(const T &first, const fraction<T> &second) {
  return fraction<T>(first) * second;
}

/* ----------------------------------------------------------------*/
/**
 * @brief   division of two fraction (a/b) / (c/d) = a*d / b*c
 *
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return ad/bc division
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;

  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();

  if (d == 0 || b == 0) {
    throw std::domain_error("denominator cannot be zero");
  }

  _fract.setNumerator(a * d);
  _fract.setDenominator(b * c);

  _fract.simplifyFractions();
  return _fract;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b / c = a/bc
 *
 * @tparam T
 * @param first a/b
 * @param second c/1
 *
 * @return a/bc  division
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second) {
  return first / fraction<T>(second);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a / (c/d) = ad/c
 *
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return  ad/c division
 */
/* ----------------------------------------------------------------*/
template <typename T>
fraction<T> operator/(const T &first, const fraction<T> &second) {
  return fraction<T>(first) / second;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  equality comparision of a/b and c/d , they are equal when simplified
 *          versions have same numerator and denominator
 *
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return true if equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator==(fraction<T> &first, fraction<T> &second) {
  first.simplifyFractions();
  second.simplifyFractions();

  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();

  if (a == c && b == d)
    return true;
  else
    return false;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b == c
 *
 * @tparam T
 * @param first a/b
 * @param second c
 *
 * @return true if equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator==(fraction<T> &first, const T &second) {
  first.simplifyFractions();
  fraction<int> number(second, 1);
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if (a == c && b == d)
    return true;
  else
    return false;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a == c/d
 *
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return true if equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator==(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = number.getNumerator();
  T b = number.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  if (a == c && b == d)
    return true;
  else
    return false;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  a/b != c/d equality check for two fractions
 *
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return false if equal else true
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator!=(fraction<T> &first, fraction<T> &second) {
  return !(first == second);
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a/b != c
 *
 * @tparam T
 * @param first a/b
 * @param second c
 *
 * @return false if equal else true
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator!=(fraction<T> &first, const T &second) {
  first.simplifyFractions();
  fraction<int> number(second, 1);
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if (a == c && b == d)
    return false;
  else
    return true;

  // return !(first == fraction<T>(second));
}
/* ----------------------------------------------------------------*/
/**
 * @brief  a != c/d
 *
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return true if not equal else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator!=(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first);
  T a = second.getNumerator();
  T b = second.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if (a == c && b == d)
    return false;
  else
    return true;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is bigger fraction a/b > c/d
 *            a/b - c/d > 0 => ad -bc > 0 => a/b is bigger than c/d
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return true if first is bigger else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator>(fraction<T> &first, fraction<T> &second) {
  first.simplifyFractions();
  second.simplifyFractions();
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();

  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is bigger fraction a/b > c
 *            a/b - c > 0 => a -bc > 0 => a/b is bigger than c
 * @tparam T
 * @param first a/b
 * @param second c
 *
 * @return true if first is bigger else false
 */
/* ----------------------------------------------------------------*/

template <typename T> bool operator>(fraction<T> &first, const T &second) {
  first.simplifyFractions();
  fraction<int> number(second);
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is bigger fraction a/b > c/d
 *            a - c/d > 0 => ad -c > 0 => a is bigger than c/d
 * @tparam T
 * @param first a
 * @param second c/d
 *
 * @return true if first is bigger else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator>(T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first);
  T a = number.getNumerator();
  T b = number.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is smaller fraction a/b < c/d
 *            a/b - c/d > 0 => ad -bc > 0 => c/d is lesser than a/b
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return true if first is smaller else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator<(fraction<T> &first, fraction<T> &second) {
  first.simplifyFractions();
  second.simplifyFractions();
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  if ((a * d - c * b) > 0) {
    return false;
  } else
    return true;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is smaller fraction a/b < c
 *            a/b - c > 0 => a -bc > 0 => c is lesser than a/b
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return true if first is smaller else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator<(fraction<T> &first, const T &second) {
  first.simplifyFractions();
  fraction<int> number(second, 1);
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if ((a * d - c * b) > 0) {
    return false;
  } else
    return true;
}
/* ----------------------------------------------------------------*/
/**
 * @brief  check which one is smaller fraction a< c/d
 *            a - c/d > 0 => ad -c > 0 => c/d is lesser than a
 * @tparam T
 * @param first a/b
 * @param second c/d
 *
 * @return true if first is smaller else false
 */
/* ----------------------------------------------------------------*/
template <typename T> bool operator<(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = number.getNumerator();
  T b = number.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();
  if ((a * d - c * b) > 0) {
    return false;
  } else
    return true;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  TO show output in ostream
 *
 * @tparam T
 * @param out
 * @param fraction
 *
 * @return ostream
 */
/* ----------------------------------------------------------------*/
template <typename T>
std::ostream &operator<<(std::ostream &out, const fraction<T> &fraction) {
  out << fraction.numerator << "/" << fraction.denominator;
  return out;
}

/* ----------------------------------------------------------------*/
/**
 * @brief  To get input as fraction
 *
 * @tparam T
 * @param in
 * @param fraction
 *
 * @return istream
 */
/* ----------------------------------------------------------------*/
template <typename T>
std::istream &operator>>(std::istream &in, fraction<T> &fraction) {
  in >> fraction.numerator >> fraction.denominator;
  return in;
}

/*--------------------------------**-----------------------------------*/
