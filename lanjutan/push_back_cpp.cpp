// nama_vektor.push_back(nilai);

#include <iostream>
#include <vector>

int main() {
  // std::vector<int> daftar_angka;
  //
  // daftar_angka.push_back(5);
  // daftar_angka.push_back(20);
  // daftar_angka.push_back(33);
  //
  // for (int i = 0; i < daftar_angka.size(); ++i) {
  //   std::cout << daftar_angka[i] << " ";
  // }
  // std::cout << std::endl;
  //
  // int input;
  // std::cout << "masukkan angka (0 untuk stop): ";
  //
  // while (std::cin >> input && input != 0) {
  //   daftar_angka.push_back(input);
  //   std::cout << "ditambahkan nilai: " << input << std::endl;
  // }
  //
  // for (const int& angka : daftar_angka) {
  //   std::cout << angka << " ";
  // }
  // std::cout << std::endl;
  //
  // std::cout << "jumlah elemen: " << daftar_angka.size() << std::endl;
  // std::cout << "kapasitas memori: " << daftar_angka.capacity() << std::endl;

  std::vector<int> vektor;
  vektor.reserve(1000);
  for (int i = 0; i < 1000; ++i) {
    vektor.push_back(i);
  }

  for (auto angka : vektor) {
    std::cout << angka << " ";
  }
  std::cout << std::endl;

  return 0;
}
