// do {
//  isi kode yang akan kita buat
// } while (kondisi);
//
// jika true -> loop akan berulang
// jika false -> loop akan berhenti
//
// 1. esekusi minimal satu kali
// 2. mudah dibaca
// 3. fleksibel
#include <iostream>

int main() {
  std::cout << "hapus komentar salah satu statement kode dibawah ini"
            << std::endl;
  /**
  int i = 1;

  do {
    std::cout << "angka ke: " << i << std::endl;
    i++;
  } while (i <= 20);
  **/

  /**
  int angka;
  do {
    std::cout << "masukkan angka antara 1 dan 10: ";
    std::cin >> angka;

    if (angka < 1 || angka > 10) {
      std::cout << "angka tidak valid, coba lagi" << std::endl;
    }
  } while (angka < 1 || angka > 10);
  std::cout << "kamu memasukkan angka: " << angka << std::endl;
  **/

  /**
  int pilihan;
  do {
    std::cout << "menu makanan restoran" << std::endl;
    std::cout << "1. kepiting" << std::endl;
    std::cout << "2. mie aceh" << std::endl;
    std::cout << "3. keluar" << std::endl;
    std::cout << "masukkan pilihan menu: ";
    std::cin >> pilihan;

    switch (pilihan) {
    case 1:
      std::cout << "kamu memesan kepiting" << std::endl;
      break;
    case 2:
      std::cout << "kamu memesan mie aceh" << std::endl;
      break;
    default:
      std::cout << "pilihan invalid" << std::endl;
    }
  } while (pilihan != 3);
  **/

  /**
  int angka, faktorial = 1;
  std::cout << "masukkan angka: ";
  std::cin >> angka;

  int i = angka;
  do {
    faktorial *= i;
    i--;
  } while (i > 0);

  std::cout << "faktorial dari " << angka << " adalah: " << faktorial
            << std::endl;
  **/

  // 1. kondisi tidak pernah false
  /**
  int i = 1;
  do {
    std::cout << i + 1 << std::endl;
  } while (i > 0);
  **/

  /**
  int i = 5;
  do {
    std::cout << i << std::endl;
    i--;
  } while (i < 10);
  **/
  return 0;
}
