// input = mengambil data dari pengguna
// output = menampilkan informasi kepada kita
// iostream
// std::cin -> digunakan untuk menerima input pengguna
// std::cout -> digunakan untuk mencetak output ke layar ke terminal
// std::cerr -> pesan error log ke console atau ke terminal
// std::clog (log output) -> pesan log ke console

// >> (extraction operator): untuk mengambil input dari pengguna ke program
// << (insertion operator): mengirimkan output dari program ke console
#include <iostream>
#include <string>

int main() {
  std::string nama;
  std::cout << "masukkan nama kamu: ";
  std::cin >> nama;
  std::cout << "halo " << nama << std::endl;
  return 0;
}
