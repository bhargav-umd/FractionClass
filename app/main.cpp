#include "../include/fraction.hpp"
#include <iostream>

int main() {
  fraction<int> a(1, 2);
  fraction<int> b(2, 3);

  fraction<int> c = a + b;

  c.display();

  return 0;
}
