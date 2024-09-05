#include <cctype>
#include <iostream>
#include <string>
#include <utility>

bool is_voyelle(char &c) {
  c = std::tolower(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
  std::string word = "Blink-182";
  std::cout << word << "\n";
  std::cout << "String size : " << word.size()
            << " & last element : " << word[word.size() - 1] << "\n";
  word.pop_back();
  std::cout << "Word without last element : " << word << "\n";
  std::string new_word = "IMAC " + word;
  std::cout << new_word << "\n";

  for (char &c : new_word) {
    if (is_voyelle(c))
      c = std::toupper(c);
    else
      c = std::tolower(c);
  }

  for (int i = 0; i < new_word.size() / 2; i++)
    std::swap(new_word[i], new_word[new_word.size() - i]);

  std::cout << new_word << "\n";
  return 0;
}