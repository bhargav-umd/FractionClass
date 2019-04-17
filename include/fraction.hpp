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
  friend bool operator==(fraction &, fraction &);
  friend bool operator!=(fraction &, fraction &);
  friend bool operator>(const fraction &, const fraction &);
  friend bool operator<(const fraction &, const fraction &);

  friend fraction operator+(const fraction &, const T &);
  friend fraction operator-(const fraction &, const T &);
  friend fraction operator*(const fraction &, const T &);
  friend fraction operator/(const fraction &, const T &);
  friend bool operator==(fraction &, const T &);
  friend bool operator!=(fraction &, const T &);
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
fraction<T> fraction<T>::simplifyFractions(fraction<T> &_fract) {
  if (_fract.denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }

  T gcd = greatestCommonDivisor(_fract.numerator, _fract.denominator);
  _fract.numerator /= gcd;
  _fract.denominator /= gcd;
  if (_fract.denominator < 0) {
    _fract.denominator = abs(_fract.denominator);
    _fract.numerator = -_fract.numerator;
  }
  return _fract;
}

template <typename T> T fraction<T>::getNumerator() { return this->numerator; }
template <typename T> T fraction<T>::getDenominator() {
  return this->denominator;
}

template <typename T> void fraction<T>::display() {
  std::cout << this->numerator << "/" << this->denominator << std::endl;
}

template <typename T>
fraction<T> operator+(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  _fract.numerator = first.numerator * second.denominator +
                     second.numerator * first.denominator;
  _fract.denominator = first.denominator * second.denominator;

  return simplifyFractions(_fract);
}
template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second) {
  return first + fraction<T>(second, 1);
}

template <typename T>
fraction<T> operator-(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  _fract.numerator = first.numerator * second.denominator -
                     second.numerator * first.denominator;
  _fract.denominator = first.denominator * second.denominator;

  return simplifyFractions(_fract);
}
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second) {
  return first - fraction<T>(second, 1);
}

template <typename T>
fraction<T> operator*(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  _fract.numertor = first.numerator * second.numerator;
  _fract.denominator = first.denominator * second.denominator;

  return simplifyFractions(_fract);
}

template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second) {
  return first * fraction<T>(second, 1);
}

template <typename T>
fraction<T> operator/(const fraction<T> &first, const fraction<T> &second) {
  fraction<T> _fract;
  _fract.numertor = first.numerator * second.denominator;
  _fract.denominator = first.denominator * second.numerator;

  return simplifyFractions(_fract);
}

template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second) {
  return first / fraction<T>(second, 1);
}

template <typename T> bool operator==(fraction<T> &first, fraction<T> &second) {
  first = simplifyFractions(first);
  second = simplifyFractions(second);

  if (first.numerator == second.numerator &&
      first.denominator == second.denominator)
    return true;
  else
    return false;
}
template <typename T> bool operator==(fraction<T> &first, const T &second) {
  return first == fraction<T>(second, 1);
}

template <typename T> bool operator!=(fraction<T> &first, fraction<T> &second) {
  return !(first == second);
}
template <typename T> bool operator!=(fraction<T> &first, const T &second) {
  return !(first == fraction<T>(second, 1));
}

template <typename T>
bool operator>(fraction<T> &first, const fraction<T> &second) {
  if ((first.numerator * second.denominator -
       second.numerator * first.denominator) > 0) {
    return true;
  } else
    return false;
}

template <typename T> bool operator>(fraction<T> &first, const T &second) {
  return (first > fraction<T>(second, 1));
}

template <typename T> bool operator<(fraction<T> &first, fraction<T> &second) {
  return !(first > fraction<T>(second, 1));
}

template <typename T> bool operator<(fraction<T> &first, const T &second) {
  return !(first > fraction<T>(second, 1));
}
