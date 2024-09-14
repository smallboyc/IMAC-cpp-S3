#include "VectorD.hpp"
#include <iostream>

int main() {

  VectorD my_vector(4, 1);
  VectorD my_second_vector(my_vector);
//   my_vector.display();
  std::cout << my_vector.dot(my_second_vector) << "\n";
  std::cout << my_vector.norm() << "\n";

  VectorD my_third_vector;
  my_third_vector = my_vector;
  my_third_vector.display();

  return 0;
}
