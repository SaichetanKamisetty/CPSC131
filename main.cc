#include <iostream>
#include <algorithm>
#include <initializer_list>

#include "vector131.h"


int main() {
  vector131<int> car{3, 4, 5, 6};
  car.push_back(3);
  car.push_back(5);
  car.push_back(10);
  car.push_back(4);

  car.push_front(31);
  car.push_front(34);
  car.push_front(12);
  car.push_front(331);

  car.pop_back();
  car.pop_back();
  car.pop_back();
  car.pop_back();

  car.resize(3);
  car.resize(10);

  for (int i = 0; i < car.size(); i++) {
    std::cout << car[i] << " ";
  } 
  std::cout << "\n";

  return 0;
}
