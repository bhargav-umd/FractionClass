#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

template <typename T> T greatestCommonDivisor(const T &, const T &);

template <typename T> class fraction;

template <typename T>
fraction<T> operator+(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator-(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator*(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator/(const fraction<T> &first, const fraction<T> &second);

template <typename T>
fraction<T> operator==(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator>(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator<(const fraction<T> &first, const fraction<T> &second);

template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second);

template <typename T>
fraction<T> operator==(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator>(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator<(const fraction<T> &first, const T &second);

template <typename T> class fraction {
private:
  T numerator, denominator;

public:
  fraction<T>();
  fraction<T>(T);
  fraction<T>(const T &numerator, const T &denominator);

  T getNumerator();
  T getDenominator();

  void display();
  friend fraction operator+(const fraction &, const fraction &);
  friend fraction operator-(const fraction &, const fraction &);
  friend fraction operator*(const fraction &, const fraction &);
  friend fraction operator/(const fraction &, const fraction &);
  friend bool operator==(const fraction &, const fraction &);
  friend bool operator!=(const fraction &, const fraction &);
  friend bool operator>(const fraction &, const fraction &);
  friend bool operator<(const fraction &, const fraction &);

  friend fraction operator+(const fraction &, const T &);
  friend fraction operator-(const fraction &, const T &);
  friend fraction operator*(const fraction &, const T &);
  friend fraction operator/(const fraction &, const T &);
  friend bool operator==(const fraction &, const T &);
  friend bool operator!=(const fraction &, const T &);
  friend bool operator>(const fraction &, const T &);
  friend bool operator<(const fraction &, const T &);
};

// Definitions

template <typename T>
T greatestCommonDivisor(const T &numerator, const T &denominator) {
  if (numerator % denominator == 0) {
    return denominator;
  }
  return greatestCommonDivisor(denominator, numerator % denominator);
}

template <typename T> fraction<T>::fraction() { T numerator = 0; }
