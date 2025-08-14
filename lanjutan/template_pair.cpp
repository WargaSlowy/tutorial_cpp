// template <typename T>
// class KelasKita<T, int> {
//     T, int
// }
#include <iostream>
#include <string>
template <typename T1, typename T2>
class Pairing {
public:
  T1 first;
  T2 second;

  Pairing(T1 a, T2 b) : first(a), second(b) {}

  void tampilin() const {
    std::cout << "Pairing(" << first << ", " << second << ")" << std::endl;
  }
};

template <typename T>
class Pairing<T, int> {
public:
  T first;
  int second;

  Pairing(T a, int b) : first(a), second(b) {}

  void tampilin() const {
    std::cout << "special pairing: (" << first << ", " << second << ")" << std::endl;
  }
};

int main() {
  Pairing<int, double> pairing_pertama(10, 3.14);
  Pairing<std::string, int> pairing_kedua("wello", 42);
  Pairing<int, int> pairing_ketiga(5, 10);

  pairing_pertama.tampilin();
  pairing_kedua.tampilin();
  pairing_ketiga.tampilin();

  return 0;
}
