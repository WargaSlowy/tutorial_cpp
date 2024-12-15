// 1. indeks terurut -> 0
// 2. tipe data sama
// 3. ukuran yang tetap
//
// int daftar_harga[5] = {12, 13, 14, 15, 16};
#include <iostream>

int main() {
  /**
  int daftar_kita[3] = {1, 3, 5};
  std::cout << "element pertama adalah " << daftar_kita[0] << std::endl;
  std::cout << "element kedua adalah " << daftar_kita[1] << std::endl;

  daftar_kita[0] = 90;
  std::cout << "element pertama setelah diganti adalah: " << daftar_kita[0]
            << std::endl;
  **/

  // mengiterasi array dengan menggunakan looping
  /**
  int array_kita[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    std::cout << "element ke " << i << "adalah : " << array_kita[i] <<
  std::endl;
  }
  **/

  // array paling dasar adalah array 1 dimensi
  /**
  int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << "matriks[" << i << "][" << j << "]: " << matriks[i][j]
                << std::endl;
    }
  }
  **/
  int ukuran;
  std::cout << "masukkan ukuran dari array: ";
  std::cin >> ukuran;
  
  int* array_dinamis = new int[ukuran];
  for (int i = 0; i < ukuran; i++) {
    array_dinamis[i] = i * 10;
  }
  std::cout << "isi dari array dinamis buatan kita: ";
  for (int i = 0; i < ukuran; i++) {
    std::cout << array_dinamis[i] << " ";
  }

  delete[] array_dinamis;
  return 0;
}
