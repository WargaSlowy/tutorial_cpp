// template <typename T>
// void fungsi(T value) {
//   //
// }
//
// template <>
// void fungsi<int>(int value) {
//   //
// }

#include <iostream>
#include <string>

template <typename T>
void cetak(T value) {
  std::cout << "nilainya adalah: " << value << std::endl;
}

template <>
void cetak<int>(int value) {
  std::cout << "nilai int adalah: " << value << std::endl;
}

template <>
void cetak<std::string>(std::string nama) {
  std::cout << "nilai dari string: " << nama << std::endl;
}

int main() {
  int nilai_kita = 20;
  std::string nama = "nizwa";
  float data = 2.45;
  double data_kita = 4.8765;

  cetak(nilai_kita);
  cetak(nama);
  cetak(data);
  cetak(data_kita);

  return 0;
}
