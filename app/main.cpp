#include "../include/fraction.hpp"
#include <iostream>

int main() {
  fraction<int> a(1, 2);
  fraction<int> b(3, 4);

  fraction<int> c = 5 + b;
  fraction<int> d = a * b;
  fraction<int> e = a / b;
  fraction<int> f = b - a;

  bool g = a > b;
  bool h = a < b;
  bool i = (a == b);
  bool j = (a != b);

  fraction<double> k(33, 44.5);

  c.display();
  d.display();
  e.display();
  f.display();
  std::cout << g << h << i << j << std::endl;

  return 0;
}
