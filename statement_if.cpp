// if (kondisi) {
//  ... <- ini disini adalah isi dari kode jika kondisi tersebut bernilai
//  true
// }
//
// if statement
// if (kondisi) {
//  ... <- blok kita buat
// } else {
//  ... blok kode
// }
//
// if else else if
// if (kondisi) {
//  ... <- blok kode ini
// } else if (kondisi) {
//  .. <- blok kode ini yang akan di esekusi
// } else {
//  .. <- jika diatas tidak ada satupun terpenuhi
// }
#include <iostream>

int main() {
  int nilai;
  std::cout << "masukkan nilai: ";
  std::cin >> nilai;

  if (nilai >= 90) {
    std::cout << "grade: jago" << std::endl;
  } else if (nilai >= 80) {
    std::cout << "grade: sedikit jago" << std::endl;
  } else if (nilai >= 70) {
    std::cout << "grade: bolehlah" << std::endl;
  } else if (nilai >= 60) {
    std::cout << "grade: belajar lagi gan" << std::endl;
  } else {
    std::cout << "beban kali wak" << std::endl;
  }
  return 0;
}
