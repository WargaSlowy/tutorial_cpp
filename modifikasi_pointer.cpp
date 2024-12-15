// 1. mengubah alamat yang disimpan oleh si pointer
// 2. mengubah data di alamat yang ditunjuk oleh si pointer
// - mengubah nilai anggota tertentu dalam union
// - menujukkan pointer ke bagian lagi dari union atau data lain
#include <iostream>

/**
union DataKita {
  int angka_integer;
  float angka_desimal;
  char* karaketerPointer;
};
**/

union DataKita {
  int arrayBulat[5];
  float nilai_desimal;
};

int main() {
  /**
  int angka_pertama = 20, angka_kedua = 30;
  int* pointer_angka_pertama = &angka_pertama;

  std::cout << "sebelum data di modif: " << *pointer_angka_pertama << std::endl;

  *pointer_angka_pertama = 50;
  std::cout << "nilai dari angka pertama di modif oleh si pointer: " << angka_pertama << std::endl;

  pointer_angka_pertama = &angka_kedua;
  std::cout << "nilai pointer dari pointer_angka_pertama adalah: " << *pointer_angka_pertama << std::endl;
  **/
  /**
  DataKita dataKita;
  dataKita.angka_integer = 42;
  std::cout << "nilai integer sekarang adalah " << dataKita.angka_integer << std::endl;

  float* pointer_nilai_desimal = reinterpret_cast<float*>(&dataKita);
  *pointer_nilai_desimal = 3.14f;
  std::cout << "nilai float dari desimal adalah " << dataKita.angka_desimal << std::endl;

  char kata[] = "Wello apa kabar?";
  dataKita.karaketerPointer = kata;
  std::cout << "kata mutiara sebelum di modifikasi: " << dataKita.karaketerPointer << std::endl;

  *dataKita.karaketerPointer = 'H';
  std::cout << "sekarang sudah dirubah nih: " << dataKita.karaketerPointer << std::endl;
  **/

  DataKita dataKita;

  dataKita.arrayBulat[0] = 10;
  dataKita.arrayBulat[1] = 20;
  dataKita.arrayBulat[2] = 30;
  dataKita.arrayBulat[3] = 40;
  dataKita.arrayBulat[4] = 50;

  int* pointer_array = dataKita.arrayBulat;
  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_array + i) << " ";
  }

  std::cout << std::endl;
  *(pointer_array + 2) = 100;
  std::cout << "setelah di modif: ";
  for (int i = 0; i < 5; i++) {
    std::cout << *(pointer_array + i) << " ";
  }
  return 0;
}
