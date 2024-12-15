// + dan - -> menggeser
// < > dst
// pointer_pertama - pointer_kedua
// int (4 byte) -> + 1 -> akan menggeser sebanyak 4 byte
// char (1 byte) -> + 1 -> menggeser alamat memori sebanyak 1 byte
#include <iostream>

int main() {
  /**
  int array_kita[] = {10, 20, 30, 40, 50};
  int* pointer_array_kita = array_kita;

  for (int i = 0; i < 5; i++) {
    std::cout << "element ke " << i << " adalah : " << *(pointer_array_kita + i)
  << std::endl;
  }
  **/
  /**
  int array_kita[] = {100, 200, 300, 400, 500};
  int* pointer_array_kita = array_kita;

  std::cout << "pointer pertama adalah: " << *pointer_array_kita << std::endl;

  pointer_array_kita++;
  std::cout << "ketika sudah di geser: " << *pointer_array_kita << std::endl;

  pointer_array_kita += 2;
  std::cout << "digesar += 2: " << *pointer_array_kita << std::endl;

  pointer_array_kita--;
  std::cout << "balik lah: " << *pointer_array_kita << std::endl;
  **/

  /**
  int array_kita[] = {5, 10, 15, 20, 25};
  int* array_kita_elemen2 = &array_kita[1];
  int* array_kita_elemen5 = &array_kita[4];

  array[4] - array[1]

  int jarak = array_kita_elemen2 - array_kita_elemen5;
  std::cout << "jarak antara array 2 dan kelima adalah: " << jarak << std::endl;
  **/

  char blok_memori[] = {'A', 'B', 'C', 'D', 'E'};
  char *pointer_blok_memori = blok_memori;

  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_blok_memori + i) << " ";
  }

  std::cout << std::endl;
  *(pointer_blok_memori + 1) = 'Z';
  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_blok_memori + i) << " ";
  }

  return 0;
}
