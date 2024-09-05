#include <cstddef>
#include <iostream>
#include <vector>

void print_vector(std::vector<int> &vec) {
  for (const int number : vec)
    std::cout << number << "\n";
}

void add_ten(std::vector<int> &vec) {
  for (int &number : vec)
    number += 10;
}

void mean_reference(std::vector<int> const &vec) { // ref constante cool oui!
  float mean = 0;
  for (int const &number : vec)
    mean += number;
  //   std::cout << "Moyenne : " << mean / vec.size() << "\n";
}

void mean_copy(std::vector<int> const vec) { // constante cool oui!
  float mean = 0;
  for (int const number : vec)
    mean += number;
  //   std::cout << "Moyenne : " << mean / vec.size() << "\n";
}

int main() {
  size_t my_vector_size = 20;
  std::vector<int> my_vector;
  for (int i = 0; i < my_vector_size; i++)
    my_vector.push_back(i % 10);

  //   print_vector(my_vector);
  add_ten(my_vector);

  // Test de perf
  const unsigned int nbIter = 100000000;
  std::cout << "with reference ..." << std::endl;
  for (unsigned int i = 0; i < nbIter; ++i)
    mean_reference(my_vector);
  std::cout << "done" << std::endl;
  std::cout << "with copy ... " << std::endl;
  for (unsigned int i = 0; i < nbIter; ++i)
    mean_copy(my_vector);
  std::cout << "done" << std::endl;

  // les refs c'est quand même plus rapide !
  // enlever const change pas les perfs, c'est juste plus clair et sécurisé.

  return 0;
}