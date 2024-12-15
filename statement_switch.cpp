/*
 * switch (ekspresi) {
 *  case nilai:
 *     ...
 *   break;
 *   case nila2:
 *     ...
 *     break;
 * default:
 *
 * }
 */

#include <iostream>

int main() {
  /**
  int pilihan;

  std::cout << "pilihan menu" << std::endl;
  std::cout << "1. kepiting" << std::endl;
  std::cout << "2. kerang" << std::endl;
  std::cout << "3. mie aceh" << std::endl;
  std::cout << "4. sate matang" << std::endl;
  std::cout << "masukkan pilihan anda: ";
  std::cin >> pilihan;

  switch (pilihan) {
  case 1:
    std::cout << "kamu memilih makanan kepiting" << std::endl;
    break;

  case 2:
    std::cout << "kamu memilih kerang" << std::endl;
    break;

  case 3:
    std::cout << "kamu memilih mie aceh" << std::endl;
    break;

  case 4:
    std::cout << "kamu memilih sate matang" << std::endl;
    break;

  default:
    std::cout << "kamu memasukkan menu makanan yang salah!" << std::endl;
  }
  **/

  /*char huruf;*/
  /*std::cout << "masukkan sebuah huruf";*/
  /*std::cin >> huruf;*/
  /**/
  /*switch (huruf) {*/
  /*case 'a':*/
  /*case 'i':*/
  /*case 'u':*/
  /*case 'e':*/
  /*case 'o':*/
  /*  std::cout << "kamu memasukkan huruf vokal" << std::endl;*/
  /*  break;*/
  /*default:*/
  /*  std::cout << huruf << " ini adalah bukan huruf vokal" << std::endl;*/
  /*}*/

  char operasi;
  float angka1, angka2;

  std::cout << "masukkan angka1: ";
  std::cin >> angka1;

  std::cout << "masukkan operasi (+, -): ";
  std::cin >> operasi;

  std::cout << "masukkan angka2: ";
  std::cin >> angka2;

  switch (operasi) {
  case '+':
    std::cout << angka1 << " + " << angka2 << " = " << angka1 + angka2
              << std::endl;
    break;
  case '-':
    std::cout << angka1 << " + " << angka2 << " = " << angka1 - angka2
              << std::endl;
    break;
  default:
    std::cout << "hey kamu memasukkan operator yang belum dibuat";
  }
  return 0;
}
