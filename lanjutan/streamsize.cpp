#include <fstream>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  // std::istringstream iss("wello apa kabar warga slowy");
  //
  // char buffer_karakter[100];
  //
  // iss.read(buffer_karakter, 11);
  // std::streamsize hitung = iss.gcount();
  //
  // std::cout << "jumlah karakter yang dibaca: " << hitung << std::endl;
  // for (std::streamsize iterasi = 0; iterasi < hitung; ++iterasi) {
  //   std::cout << buffer_karakter[iterasi];
  // }

  {
    std::ofstream file("contoh.txt");
    file << "ini contoh dari file yang ada isi kata wello";
  }

  std::ifstream file("contoh.txt");

  char buffer_karakter[20];
  file.read(buffer_karakter, 15);

  std::streamsize baca_bytes = file.gcount();
  std::cout << "bytes yang dibaca adalah: " << baca_bytes << std::endl;

  std::streamsize posisi_sekarang = file.tellg();
  std::cout << "posisi saat itu juga: " << posisi_sekarang << std::endl;

  file.seekg(5, std::ios::beg);
  std::streamsize posisi_barunya = file.tellg();
  std::cout << "posisi sekarang ini juga adalah: " << posisi_barunya << std::endl;

  file.close();

  return 0;
}


