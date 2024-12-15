// 1. mengakses data yang dibuat dalam fungsi
// 2. mengelola memori dinamis
// 3. efisiensi
//
// 1. memori lokal (gk disarankan)
// 2. memori dinamis (new)
// 3. memori global atau statis
#include <iostream>

/**
int* buatArray(int ukuran) {
  int* array = new int[ukuran];
  for (int i = 0; i < ukuran; ++i) {
    array[i] = i + 1;
  }
  return array;
}
**/

/**
int* returnLokalPointer() {
  int x = 42;
  return &x;
}
**/

/**
int* returnStaticPointer() {
  static int x = 42;
  return &x;
}
**/

struct Poin {
  int x, y;
};

Poin* buatPoin(int a, int b) {
  Poin* p = new Poin;
  p->x = a;
  p->y = b;
  return p;
}


int main() {

  /**
  int ukuran = 10;
  int* array_kita = buatArray(ukuran);

  std::cout << "array yang dibuat oleh fungsi dari buatArray()" << std::endl;
  for (int i = 0; i < ukuran; ++i) {
    std::cout << array_kita[i] << " ";
  }

  std::cout << std::endl;
  delete[] array_kita;
  **/

  /**
  int* pointer = returnLokalPointer();
  std::cout << "nilai: " << *pointer << std::endl;
  **/

  /**
  int* ptr = returnStaticPointer();
  std::cout << "nilainya adalah: " << *ptr << std::endl;
  **/

  Poin* p = buatPoin(10, 20);
  std::cout << "Poin: (" << p->x << ", " << p->y << ")" << std::endl;
  delete p;
  return 0;

}
