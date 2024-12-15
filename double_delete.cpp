#include <iostream>

int main() {
  int *angka = new int(10);
  std::cout << "nilainya adalah: " << *angka << std::endl;
  
  delete angka;
  angka = nullptr;
  delete angka;

  return 0;
}
