// for (inisialisasi data; kondisi; pembaruan kondisi) {
// ... statement kode yang akan diulang
// berdasarkan dari kondisi yang diberikan
// }
//
// 1. inisialisasi data
// 2. periksa kondisi
//    - jika true, maka jalankan statement kode
//    - jika false, maka keluar dari looping (perulangan)
// 3. esekusi pembaruan dan ulangi langkah kedua
//
// 1. struktur kode lebih rapi -> berada dalam satu baris
// 2. efiensi -> jumlah langkah sudah diketahui
// 3. mudah dipahami
#include <iostream>

int main() {
  std::cout << "hapus komentar salah satu statement kode dibawah ini"
            << std::endl;
  /**
  for (int i = 1; i <= 50; i++) {
    std::cout << "sudah angka ke: " << i << std::endl;
  }
  return 0;
  **/

  /**
  int jumlah = 0;
  for (int i = 1; i <= 5; i++) {
    jumlah += i;
    std::cout << "informasi: " << jumlah << std::endl;
  }

  std::cout << "jumlah: " << jumlah << std::endl;
  return 0;
  **/

  /**
  int angka = 5;
  for (int i = 1; i <= angka; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "* ";
    }
    std::cout << std::endl;
  }
  return 0;
  **/

  /**
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      continue;
    }

    if (i == 7) {
      break;
    }

    std::cout << i << " ";
  }
  return 0;
  **/

  // penyebab terjadinya infitine looping
  /**
  for (int i = 1; i > 0; i++) {
    std::cout << i << std::endl;
  }
  **/

  /**
  for (int i = 1; i <= 10; i--) {
    std::cout << i << std::endl;
  }
  **/
  return 0;
}
