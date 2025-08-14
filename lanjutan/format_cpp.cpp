#include <format>
#include <iostream>
#include <string>

int main() {
  int nilai_kita = 300;
  std::string nama = "arfy";

  std::string hasil = std::format("wello {}, nilai_kita adalah: {}", nama, nilai_kita);
  std::cout << hasil << std::endl;
}
