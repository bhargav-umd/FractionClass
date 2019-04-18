#include "../include/fraction.hpp"
#include <iostream>

int main() {
  fraction<int> a(1, 2);
  fraction<int> b(3, 4);

  fraction<int> c = 5 + b + 10;
  fraction<int> d = a * b;
  fraction<int> e = a / b;
  fraction<int> f = b - a;

  int pp = 1;
  //  bool g = pp < a;
  bool h = a > 1;
  bool i = (a == b);
  bool j = (a != b);
  // auto p = 3 < 2.0;
  fraction<double> k(33, 44.5);

  c.display();
  d.display();
  e.display();
  f.display();
  // std::cout << g << std::endl;
  std::cout << h << i << j << std::endl;
  // std::cout << p << std::endl;
  return 0;
}
