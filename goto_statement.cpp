// goto nama_label;
// contoh ...
// nama_label:
//  .. kode yang akan di lompat

#include <iostream>

int main() {
  /**
  std::cout << "mulai program" << std::endl;

  goto lompatin;
  std::cout << "ini kode saya" << std::endl;

  lompatin:
    std::cout << "ini adalah blok kode goto" << std::endl;
    std::cout << "akhiri program" << std::endl;
  **/
  int angka;
  std::cout << "masukkan angka positif: " << std::endl;
  std::cin >> angka;
  if (angka < 0) {
    goto masuk_ke_label_error;
  }

  std::cout << "kamu memasukkan angka " << angka << std::endl;
  return 0;

masuk_ke_label_error:
  std::cout << "error: hey kamu tidak boleh masukin angka negatif" << std::endl;
  return 1;
}
