// 1. stream
//   - input stream 
//   - output stream
// 2. fstream: input dan output
//    ifstream -> membaca file
//    ofstream -> menulis file
//    fstream -> untuk membaca dan menulis file
// 3. ios::in -> membuka file untuk membaca
//    ios::out -> membuka file untuk menulis
//    ios::app -> menambah data ke akhir file
//    ios::binary -> membuka file dalam mode biner
//    ios::trunc -> memotong isi file jika suda ada
//
// 1. membuka file dengan menggunakan objek dari kelas, ifstream, ofstream, fstream
// 2. melakukan operasi file )membaca, menulis keduanya
// 3. menutup file menggunakan metode .close();
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>

class Siswa {
private:
  std::string nama;
  int kelas;
  double nilai;

public:
  Siswa(std::string nama, int kelas, double nilai) : nama(nama), kelas(kelas), nilai(nilai) {}
  Siswa() : nama(""), kelas(0), nilai(0.0) {}

  void saveKeFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
      outFile << nama << ", " << kelas << ", " << nilai << std::endl;
      outFile.close();
      std::cout << "data berhasil ditambahkan " << std::endl;
    } else {
      std::cout << "ada permasalahan saat menulis file" << std::endl;
    }
  }

  static void bacaFile(const std::string& filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
      std::string line;
      std::cout << "membaca file " << filename << std::endl;
      while (getline(inFile, line)) {
        std::cout << line << std::endl;
      }
      inFile.close();
    } else {
      std::cout << "ada permasalahan ketika saat membaca file" << std::endl;
    }
  }

  void tampilkanInfo() const {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "kelas: " << kelas << std::endl;
    std::cout << "nilai: " << nilai << std::endl;
  }
};

int main() {
  Siswa siswa_pertama("pocut", 2, 80.5);
  Siswa siswa_kedua("nizwa", 3, 95.5);

  std::string filename = "data_siswa.txt";
  siswa_pertama.saveKeFile(filename);
  siswa_kedua.saveKeFile(filename);

  Siswa::bacaFile(filename);

  return 0;
}
