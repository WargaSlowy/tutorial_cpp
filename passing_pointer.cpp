// 1. efiensi
// 2. memodifikasi
// 3. mengelola memori dinamis
//
// void fungsi(int* pointer) {
//  *pointer = 20;
// }
//
// int x = 10;
// fungsi(&x);
// std::cout << x;
#include <array>
#include <iostream>
/**
void modifikasiNilai(int* pointer) {
  *pointer = 50;
}
**/

/**
void updateNilaiArray(int *array, int ukuran) {
  for (int i = 0; i < ukuran; i++) {
    array[i] += 10;
  }
}
**/

/**
void alokasiMemori(int **pointer, int ukuran) {
  *pointer = new int[ukuran];
  for (int i = 0; i < ukuran; i++) {
    (*pointer)[i] = i + 1;
  }
}
**/

void printNilai(const int* pointer) {
  if (pointer == nullptr) {
    std::cout << "pointer tidak valid" << std::endl;
  }
  std::cout << "nilai: " << *pointer << std::endl;
}

int main() {
  /**
  int x = 10;
  std::cout << "sebelum modifikasi nilai dipanggil: " << x << std::endl;

  modifikasiNilai(&x);
  std::cout << "setelah fungsi ini dipanggil nilainya adalah: " << x <<
  std::endl;
  **/

  /**
  int array_kita[] = {1, 2, 3, 4, 5};
  int ukuran = sizeof(array_kita) / sizeof(array_kita[0]);

  std::cout << "sebelum fungsi modifikasiNilai" << std::endl;
  for (int i = 0; i < ukuran; i++) {
    std::cout << array_kita[i] << " ";
  }

  std::cout << std::endl;
  updateNilaiArray(array_kita, ukuran);
  for (int i = 0; i < ukuran; i++) {
    std::cout << array_kita[i] << " ";
  }
  std::cout << std::endl;
  **/

  /**
  int *array_kita = nullptr;
  int ukuran = 5;
  alokasiMemori(&array_kita, ukuran);

  std::cout << "array dinamis yang kita alokasikan " << std::endl;
  for (int i = 0; i < ukuran; i++) {
    std::cout << array_kita[i] << " ";
  }
  std::cout << std::endl;

  delete[] array_kita;
  **/

  int angka = 100;
  printNilai(&angka);
  return 0;
}
