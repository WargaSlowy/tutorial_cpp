// 1. deklarasi dan membuka file .open()
// 2. mode operasi dari file
//    - ios::out (default)
//    - ios::app
//    - ios::trunc
//    - ios::binary
// 3. penulisan data ke file << cout
// 4. menutup .close()
//
// 1. ofstream
// 2. bukan .open()
// 3. tulis data
// 4. close()
#include <iostream>
#include <string>
#include <fstream>

class Produk {
private:
  std::string nama;
  double harga;
  int jumlah;

public:
  Produk(std::string nama, double harga, int jumlah) : nama(nama), harga(harga), jumlah(jumlah) {}

  void simpanKeFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
      outFile << "nama_produk: " << nama << " harga: " << harga << " jumlah: " << jumlah << std::endl;
      outFile.close();
      std::cout << "data produk berhasil di simpan !" << std::endl;
    } else {
      std::cout << "data gagal disimpan !" << std::endl;
    }
  }

  void informasiProduk() const {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "harga: " << harga << std::endl;
    std::cout << "jumlah barang: " << jumlah << std::endl;
  }
};

int main() {
  Produk laptop("thinkpad p15", 20000.00, 30);
  Produk skinker("extica", 500.00, 40);

  std::string filename = "katalog_produk.txt";
  laptop.simpanKeFile(filename);
  skinker.simpanKeFile(filename);

  laptop.informasiProduk();
  skinker.informasiProduk();
  return 0;
}
