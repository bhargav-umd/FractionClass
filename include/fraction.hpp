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
  fraction<T>(const T &, const T &);

  T getNumerator();
  T getDenominator();

  void display();
  fraction simplifyFractions(fraction &);

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

template <typename T>
T greatestCommonDivisor(const T &numerator, const T &denominator) {
  if (numerator % denominator == 0) {
    return denominator;
  }
  return greatestCommonDivisor(denominator, numerator % denominator);
}

template <typename T> fraction<T>::fraction() {
  this->numerator = 0;
  this->denominator = 1;
}

template <typename T> fraction<T>::fraction(T number) {
  this->numerator = number;
  this->denominator = 1;
}
template <typename T> fraction<T>::fraction(const T &numer, const T &denomin) {
  if (denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }
  this->numerator = numer;
  this->denominator = denomin;
}

template <typename T>
fraction<T> fraction<T>::simplifyFractions(fraction &frac) {
  if (frac.denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }

  T gcd = greatestCommonDivisor(frac.numerator, frac.denominator);
  frac.numerator /= gcd;
  frac.denominator /= gcd;

  return frac;
}

template <typename T> T fraction<T>::getNumerator() { return this->numerator; }
template <typename T> T fraction<T>::getDenominator() {
  return this->denominator;
}

template <typename T> void fraction<T>::display() {
  std::cout << this->numerator << "/" << this->denominator << std::endl;
}
