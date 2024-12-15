// 1. satu blok memori
// 2. efisiensi memori
// 3. mutual exclusion
//    - 3 -> a,b,c
// union NamaUnion {
//    tipe_data nama_variabel;
// };
#include <iostream>

union PaketData {
  char rawData[4];
  struct {
    char header;
    char command;
    char payloadPertama;
    char payloadKedua;
  } parsed;
};

int main() {
  /**
  DataKita dataKita;

  dataKita.nilai_integer = 10;
  std::cout << "nilai integer: " << dataKita.nilai_integer << std::endl;

  dataKita.nilai_float = 5.5;
  std::cout << "nilai float: " << dataKita.nilai_float << std::endl;

  dataKita.nilai_char = 'B';
  std::cout << "nilai char: " << dataKita.nilai_char << std::endl;
  **/

  PaketData paket;

  paket.rawData[0] = 'H';
  paket.rawData[1] = 'C';
  paket.rawData[2] = 'P';
  paket.rawData[3] = 'L';

  std::cout << "header: " << paket.parsed.header << std::endl;
  std::cout << "perintah: " << paket.parsed.command << std::endl;
  std::cout << "payload pertama: " << paket.parsed.payloadPertama << std::endl;
  std::cout << "payload kedua: " << paket.parsed.payloadKedua << std::endl;

  return 0;
}
