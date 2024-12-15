// 1. function template
// 2. class template
#include <iostream>
#include <string>

template <typename T> class Printer {
public:
  void print(T pesan) { std::cout << "generik: " << pesan << std::endl; }
};

template <>
class Printer<char> {
public:
  void print(char pesan) {
  std::cout << "Char:" << pesan << " (ASCII: " << int(pesan) << ")" << std::endl;
  }
};

int main() {
  Printer<int> integer_printer;
  integer_printer.print(123);

  Printer<char> char_printer;
  char_printer.print('G');
  return 0;
}
