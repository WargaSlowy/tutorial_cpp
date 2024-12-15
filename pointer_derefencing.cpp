// *
// 1. pointer menunjuk ke memori
// 2. operator dereferensi (*)
// 3. union dan pointer
#include <iostream>

union Data {
  int angka_integer;
  float nilai_float;
  char* char_pointer;
};

int main() {
  Data data;

  data.angka_integer = 100;
  std::cout << "nilai angka integer dari union adalah: " << data.angka_integer << std::endl;

  data.nilai_float = 5.5;
  std::cout << "nilai angka float adalah: " << data.nilai_float << std::endl;
  std::cout << "nilai angka integer sekarang adalah: " << data.angka_integer << std::endl;

  char teks[] = "halo";
  data.char_pointer = teks;
  std::cout << "charpointer (dereferensikan): "
  
  *data.char_pointer = 'j';
  std::cout << "nilai char pointe setelah ada: " << data.char_pointer << std::endl;
}
