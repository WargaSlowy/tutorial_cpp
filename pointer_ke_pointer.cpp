// pointer bisa -> variabel yang menyimpan alamt memori dari variabel lain
// pointer yang menyimpan alamat memori dari pointer lain

// int** pointer_ke_pointer;
// variabel x, pointer p -> x, pp -> p,
// x -> simpan nilai data
// p -> simpan alamat memori si x
// pp -> simpan alamat memori dari si p
// x -> 0x100
// p -> 0x200
// pp -> 0x300
// 1. alokasi memori dinamis
// 2. parameter fungsi
// 3. hirarki data:
#include <cstdlib>
#include <iostream>

/**
void modifikasiNilai(int** pp) {
  **pp = 100;
}
**/

int main() {

  /**
  int x = 42;
  int* p = &x;
  int** pp = &p;

  std::cout << "nilai x: " << x << std::endl;
  std::cout << "alamat dari x (&x): " << &x << std::endl;

  std::cout << "nilai dari p (alamat x): " << p << std::endl;
  std::cout << "alamat dari p (&p): " << &p << std::endl;

  std::cout << "nilai dari si pp (alamat si p): " << pp << std::endl;
  std::cout << "nilai yang ditunjuk oleh si pp (*pp): " << *pp << std::endl;
  std::cout << "nilai akhir dari si **pp: " << **pp << std::endl;
  **/

  /**
  int x = 42;
  int* p = &x;
  int** pp = &p;

  std::cout << "nilai sebelum kita modifikasi adalah: " << x << std::endl;
  modifikasiNilai(pp);
  std::cout << "nilai yang sudah kita rubah dari double pointer: " << x <<
  std::endl;
  **/

  int baris = 3, kolom = 4;
  int **matrix = new int *[baris];
  for (int i = 0; i < baris; ++i) {
    matrix[i] = new int[baris];
  }

  for (int i = 0; i < baris; ++i) {
    for (int j = 0; j < kolom; ++j) {
      matrix[i][j] = i * kolom + j;
    }
  }

  std::cout << "matriks adalah: " << std::endl;
  for (int i = 0; i < baris; ++i) {
    for (int j = 0; j < kolom; ++j) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < baris; ++i) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
