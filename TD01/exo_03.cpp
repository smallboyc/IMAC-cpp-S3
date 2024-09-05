#include <cstddef>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector;
  size_t vector_size = 4;

  for (int i = 0; i < vector_size; i++)
    vector.push_back(2 * i);

  std::cout << vector.size() << "\n";

  for (int i = 0; i < vector_size; i++) {
    std::cout << "element : " << vector[i] << " -> adress ; " << &vector[i]
              << "\n";
    // les éléments sont à la suite, espacé de leur place en octet en mémoire.
  }
  
  vector.pop_back();
  vector.clear();

  if (vector.empty())
    std::cout << "Tout vide..." << "\n";
  return 0;
}