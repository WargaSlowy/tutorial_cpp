#include <iostream>
#include <string>

class Produk {

public:
  Produk(std::string nama_produk, double harga_produk, int jumlah_stok) {
    this->nama_produk = nama_produk;
    this->harga_produk = harga_produk;
    this->jumlah_stok = jumlah_stok;

    std::cout << "produk dengan nama: " << this->nama_produk << " telah dibuat" << std::endl;
  }

  Produk& atur_nama(std::string nama_produk) {
    this->nama_produk = nama_produk;
    std::cout << "nama produk diubah menjadi: " << this->nama_produk << std::endl;
    return *this;
  }

  void tampilkan_info_produk() {
    std::cout << "nama produk: " << this->nama_produk << std::endl;
    std::cout << "harga: Rp." << this->harga_produk << std::endl;
    std::cout << "jumlah stok: " << this->jumlah_stok << std::endl;
    std::cout << "alamat dari si objek: " << this << std::endl;
  }

  bool apakah_harga_sama(const Produk& produk_lain) {
    return this->harga_produk == produk_lain.harga_produk;
  }

private:
  std::string nama_produk;
  double harga_produk;
  int jumlah_stok;
};

int main() {
  Produk laptop("lenovo thinkpad p15 gen 2", 15'000, 5);
  Produk smartphone("warga slowy phone", 20'000, 23);
  Produk kosmetik("warga slowy blush", 2'000, 145);

  laptop.tampilkan_info_produk();
  // smartphone.tampilkan_info_produk();
  // kosmetik.tampilkan_info_produk();
  //
  // if (laptop.apakah_harga_sama(smartphone)) {
  //   std::cout << "harga laptop dan harga smartphone sama " << std::endl;
  // } else {
  //   std::cout << "harga laptop sama harga smartphone berbeda" << std::endl;
  // }

  laptop.atur_nama("lenovo ideapad g6789");

  std::cout << std::endl;
  laptop.tampilkan_info_produk();

  return 0;
}
