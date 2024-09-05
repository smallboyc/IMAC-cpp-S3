#include <iostream>
// g++ -std=c++11 -Wall -O2 exo_01.cpp -o exo_01.exe

int main() {
  std::cout << "“Les IMACs sont des brutes de C++”" << "\n";
  int number = 41;
  std::cout << number << "\n";

  if (number == 42)
    std::cout << "Parfait." << "\n";
  else if (number > 0)
    std::cout << "Strictement positif" << "\n";
  else
    std::cerr << "Négatif" << "\n";

  return 0;
}