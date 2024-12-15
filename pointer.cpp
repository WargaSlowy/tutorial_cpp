// pointer adalah variabel yang menyimpan alamat memori dari variabel lain
// pointer ini tidak menyimpan nilai data secaralangsung, melaiknadia akan
// menyimpan alamat memori di mana data tersebut berada
// *
//
// tipe_data* nama_pointer;
//
// int* integer_pointer;
// 1. derefencing pointer (*)
//    - mengakses nilai yang ditunjuk oleh si pointer, yaitu si alamat memori
//    yang disimpan oleh si pointer
// int angka = 10;
// int* angka_pointer = &angka;
// std::cout << *angka_pointer
#include <iostream>
#include <string>

struct Orang {
  std::string nama;
  int umur;
};

int main() {
  /**
  int angka = 10;
  int* angka_pointer = &angka;

  std::cout << "nilai dari variabel angka adalah: " << angka << std::endl;
  std::cout << "alamat memori dari variabel angka adalah: " << &angka <<
  std::endl; std::cout << "nilai yang ditunjuk oleh si pointer angka tadi
  adalah: " << *angka_pointer << std::endl; std::cout << "nilai pointer
  menyimpan alamat " << angka_pointer << std::endl;

  *angka_pointer = 67;
  std::cout << "variabel angka sudah diganti nilainya adalah: " << angka <<
  std::endl;
  **/

  /**
  int array[] = {1, 2, 3, 4, 5};
  int* array_pointer = array;

  std::cout << "alamat memori dari array adalah: " << array << std::endl;
  std::cout << "nilai yang ditunjuk oleh si pointer: " << *array_pointer <<
  std::endl;

  for (int i = 0; i < 5; i++) {
    std::cout << "elemen arr[" << i << "] = " << *(array_pointer + i) <<
  std::endl;
  }
  **/

  Orang orang = {"nizwa", 25};
  Orang* pointer_orang = &orang;

  std::cout << "nama: " << pointer_orang->nama << std::endl;
  std::cout << "umur: " << pointer_orang->umur << std::endl;

  pointer_orang->umur = 20;
  std::cout << "umur setelah diubah: " << orang.umur << std::endl;
  return 0;
}
