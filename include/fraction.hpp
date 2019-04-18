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

fraction<T> operator+(const T &first, const fraction<T> &second);
template <typename T>
fraction<T> operator-(const T &first, const fraction<T> &second);
template <typename T>
fraction<T> operator*(const T &first, const fraction<T> &second);
template <typename T>
fraction<T> operator/(const T &first, const fraction<T> &second);

template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second);

template <typename T>
fraction<T> operator==(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator>(const fraction<T> &first, const fraction<T> &second);
template <typename T>
fraction<T> operator<(const fraction<T> &first, const fraction<T> &second);

template <typename T>
fraction<T> operator==(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator!=(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator>(const fraction<T> &first, const T &second);
template <typename T>
fraction<T> operator<(const fraction<T> &first, const T &second);

template <typename T>
fraction<T> operator==(const T &first, const fraction<T> &second);
template <typename T>
fraction<T> operator!=(const T &first, const fraction<T> &second);
template <typename T>
fraction<T> operator>(const T &first, const fraction<T> &second);
// template <typename T>
// fraction<T> operator<(const T &first, const fraction<T> &second);

template <typename T> class fraction {
private:
  T numerator, denominator;

public:
  fraction<T>();
  fraction<T>(const T &);
  fraction<T>(const T &, const T &);

  T getNumerator() const;
  T getDenominator() const;

  void setNumerator(const T &);
  void setDenominator(const T &);

  void display();
  void simplifyFractions();

  template <typename U>
  friend fraction<U> operator+(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator-(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator*(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator/(const fraction<U> &, const fraction<U> &);

  template <typename U>
  friend fraction<U> operator+(const fraction<U> &, const U &);
  template <typename U>
  friend fraction<U> operator-(const fraction<U> &, const U &);
  template <typename U>
  friend fraction<U> operator*(const fraction<U> &, const U &);
  template <typename U>
  friend fraction<U> operator/(const fraction<U> &, const U &);

  template <typename U>
  friend fraction<U> operator+(const U &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator-(const U &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator*(const U &, const fraction<U> &);
  template <typename U>
  friend fraction<U> operator/(const U &, const fraction<U> &);

  template <typename U>
  friend bool operator==(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend bool operator!=(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend bool operator>(const fraction<U> &, const fraction<U> &);
  template <typename U>
  friend bool operator<(const fraction<U> &, const fraction<U> &);

  template <typename U> friend bool operator==(const fraction<U> &, U &);
  template <typename U> friend bool operator!=(const fraction<U> &, U &);
  template <typename U> friend bool operator>(const fraction<U> &, U &);
  template <typename U> friend bool operator<(const fraction<U> &, const U &);

  template <typename U> friend bool operator==(const U &, const fraction<U> &);
  template <typename U> friend bool operator!=(const U &, const fraction<U> &);
  template <typename U> friend bool operator>(U &, const fraction<U> &);
  template <typename U> friend bool operator<(U &, const fraction<U> &);
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

template <typename T> fraction<T>::fraction(const T &number) {
  this->numerator = number;
  this->denominator = 1;
}
template <typename T> fraction<T>::fraction(const T &numer, const T &denomin) {
  this->numerator = numer;
  this->denominator = denomin;
  if (this->denominator == 0) {
    throw std::domain_error("denominator cannot be zero");
  }
}

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

template <typename T> T fraction<T>::getNumerator() const {
  return this->numerator;
}
template <typename T> T fraction<T>::getDenominator() const {
  return this->denominator;
}
// void setNumerator(const T &);
// void setDenominator(const T &);

template <typename T> void fraction<T>::setNumerator(const T &numer) {
  this->numerator = numer;
}
template <typename T> void fraction<T>::setDenominator(const T &dinom) {
  this->denominator = dinom;
}

template <typename T> void fraction<T>::display() {
  std::cout << this->numerator << "/" << this->denominator << std::endl;
}

template <typename T>
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
template <typename T>
fraction<T> operator+(const fraction<T> &first, const T &second) {
  return first + fraction<T>(second);
}
template <typename T>
fraction<T> operator+(const T &first, const fraction<T> &second) {
  return fraction<T>(first) + second;
}
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
template <typename T>
fraction<T> operator-(const fraction<T> &first, const T &second) {
  return first - fraction<T>(second, 1);
}
template <typename T>
fraction<T> operator-(const T &first, const fraction<T> &second) {
  return fraction<T>(first) - second;
}

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

template <typename T>
fraction<T> operator*(const fraction<T> &first, const T &second) {
  return first * fraction<T>(second);
}
template <typename T>
fraction<T> operator*(const T &first, const fraction<T> &second) {
  return fraction<T>(first) * second;
}

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
  // return simplifyFractions(_fract);
}

template <typename T>
fraction<T> operator/(const fraction<T> &first, const T &second) {
  return first / fraction<T>(second);
}
template <typename T>
fraction<T> operator/(const T &first, const fraction<T> &second) {
  return fraction<T>(first) / second;
}

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

  //    return first == fraction<T>(second);
}

template <typename T> bool operator==(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = second.getNumerator();
  T b = second.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if (a == c && b == d)
    return true;
  else
    return false;

  // return second == fraction<T>(first);
}

template <typename T> bool operator!=(fraction<T> &first, fraction<T> &second) {
  return !(first == second);
}
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
template <typename T> bool operator!=(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = second.getNumerator();
  T b = second.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if (a == c && b == d)
    return false;
  else
    return true;
}

template <typename T>
bool operator>(fraction<T> &first, const fraction<T> &second) {
  // first.simplifyFractions();
  // second.simplifyFractions();

  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = second.getNumerator();
  T d = second.getDenominator();

  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}

template <typename T> bool operator>(fraction<T> &first, const T &second) {
  first.simplifyFractions();
  fraction<int> number(second, 1);
  T a = first.getNumerator();
  T b = first.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}
template <typename T> bool operator>(T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = second.getNumerator();
  T b = second.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if ((a * d - c * b) > 0) {
    return true;
  } else
    return false;
}

template <typename T> bool operator<(fraction<T> &first, fraction<T> &second) {
  return !(first > fraction<T>(second));
}

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
template <typename T> bool operator<(const T &first, fraction<T> &second) {
  second.simplifyFractions();
  fraction<int> number(first, 1);
  T a = second.getNumerator();
  T b = second.getDenominator();
  T c = number.getNumerator();
  T d = number.getDenominator();
  if ((a * d - c * b) > 0) {
    return false;
  } else
    return true;
}
