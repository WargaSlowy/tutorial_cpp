#include <iostream>
#include <string>

class Buku {

public:
  Buku() {
    judul_buku = "kosong";
    penulis_buku = "kosong";
    tahun_terbit = 0;
    jumlah_total_buku++;

    std::cout << "buku default sudah ditambahkan ke dalam sistem" << std::endl;
    std::cout << "total buku: " << jumlah_total_buku << std::endl;
  }

  Buku(std::string judul, std::string penulis, int tahun) {
    judul_buku = judul;
    penulis_buku = penulis;
    tahun_terbit = tahun;
    jumlah_total_buku++;

    std::cout << "buku " << judul_buku << " oleh " << penulis_buku
              << " pada tahun terbit: " << tahun_terbit << " sudah didaftarkan"
              << std::endl;
    std::cout << "jumlah total buku sekarang adalah: " << jumlah_total_buku
              << std::endl;
  }

  ~Buku() {
    std::cout << "buku " << judul_buku << " dihancurkan dari memori"
              << std::endl;
    jumlah_total_buku--;
    std::cout << "total buku sekarang adalah: " << jumlah_total_buku
              << std::endl;
  }

  void tampilkan_info() const {
    std::cout << "judul: " << judul_buku << std::endl;
    std::cout << "penulis: " << penulis_buku << std::endl;
    std::cout << "tahun terbit: " << tahun_terbit << std::endl;
  }

private:
  std::string judul_buku;
  std::string penulis_buku;
  int tahun_terbit;
  static int jumlah_total_buku;
};

int Buku::jumlah_total_buku = 0;

int main() {

  // Buku buku_pertama("algoritma cpp arfy slowy", "arfy", 2025);
  // Buku buku_kedua("kimchi confession", "xaviera", 2023);
  //
  // buku_pertama.tampilkan_info();
  // buku_kedua.tampilkan_info();

  Buku buku_default;

  buku_default.tampilkan_info();

  return 0;
}
