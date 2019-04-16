#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

template <typename T> T greatestCommonDivisor(const T &, const T &);

template <typename T> class fraction {
private:
  T numerator, denominator;

public:
  fraction();
  fraction(T);
  fraction(const T &numerator, const T &denominator);

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

  friend std::istream &operator>>(std::istream &, fraction &);
  friend std::ostream operator<<(std::ostream &, const fraction &);
};

// Definitions
