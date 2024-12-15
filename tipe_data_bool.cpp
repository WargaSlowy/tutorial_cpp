#include <iostream>

int main() {
  bool memiliki_payung = true;
  bool apakah_hujan = false;
  bool keluar = memiliki_payung || !apakah_hujan;
  std::cout << "apakah bisa keluar rumah? " << keluar << std::endl;
  return 0;
}
