// while (kondisi) {
//  statement yang akan di esekusi
// }
//
// 1. jumlah iterasi tidak diketahui
// 2. perulangan yang bergantung pada kondisi yang dinamis
#include <iostream>

int main() {
  /**
  int i = 1;

  while (i <= 10) {
    std::cout << "angka ke: " << i << std::endl;
    i++;
  }
  **/

  /**
  int angka;
  std::cout << "masukkan angka positif: ";
  std::cin >> angka;

  while (angka <= 0) {
    std::cout << "hey angka tidak valid!" << std::endl;
    std::cout << "masukkan angka lagi: ";
    std::cin >> angka;
  }
  std::cout << "kamu memasukkan angka: " << angka << std::endl;
  **/

  /**
  double saldo = 1000.0;
  double bunga = 0.05;
  int tahun = 0;

  while (saldo < 2000.0) {
    saldo += saldo * bunga;
    tahun++;
  }
  std::cout << "butuh " << tahun << " tahun untuk menambahkan saldo" <<
  std::endl;
  **/

  /**
  int i = 1;
  while (i > 0) {
    std::cout << i << std::endl;
  }
  **/

  /**
  int i = 1;
  while (i < 10) {
    std::cout << i << std::endl;
    i--;
  }
  **/
  return 0;
}
