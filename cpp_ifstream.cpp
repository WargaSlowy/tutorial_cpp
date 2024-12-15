// 1. deklarasi .open()
// 2. mode operasi file -> ios::in
// 3. membaca data dari file >> getlinea
// .close()
#include <iostream>
#include <fstream>
#include <string>

class Produk {
private:
  std::string nama;
  double harga;
  int jumlah;

public:
  Produk(std::string nama, double harga, int jumlah) : nama(nama), harga(harga), jumlah(jumlah) {}
  Produk() : nama(""), harga(0.0), jumlah(0) {}

  static void bacaData(const std::string& filename) {
    std::ifstream inFile(filename);

    if (inFile.is_open()) {
      std::string nama;
      double harga;
      int jumlah;
      std::cout << "membaca data dari file:" << std::endl;
      std::cout << inFile << std::endl;
      while (inFile >> nama >> harga >> jumlah) {
        std::cout << "nama produk: " << nama << ", harga: Rp" << harga << ", jumlah: " << jumlah << std::endl;
      }
      inFile.close();
    } else {
      std::cout << "tidak membuka file" << std::endl;
    }
  }
};

int main() {
  std::string filename = "katalog_produk.txt";
  Produk::bacaData(filename);
  return 0;
}
