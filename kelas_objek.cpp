// class NamaDariKelas {
//  .. akses modifikasi, public, private, proctected
//  .. data member (attribut)
//  .. member function (metode)
// };
#include <iostream>
#include <string>

/**
class Mobil {
public:
  std::string merek_mobil;
  int tahun_keluaran;

  void displayInfoMobil() {
    std::cout << "Merek mobil: " << merek_mobil << std::endl;
    std::cout << "Tahun keluaran mobil: " << tahun_keluaran << std::endl;
  }
};
**/

class Orang {
public:
  std::string nama;
  int tahun_lahir;
  int tahun_sekarang;
  
  void tampilkanUmurSekarang() {
    std::cout << "umur kamu sekarang adalah " << tahun_sekarang - tahun_lahir << std::endl;
  }
};

int main() {
  /**
  Mobil mobil_pertama;
  Mobil mobil_kedua;
  mobil_pertama.merek_mobil = "Mclaren";
  mobil_pertama.tahun_keluaran = 2024;
  mobil_pertama.displayInfoMobil();

  std::cout << std::endl;
  
  mobil_kedua.merek_mobil = "ferrari";
  mobil_kedua.tahun_keluaran = 2023;
  mobil_kedua.displayInfoMobil();
  **/

  Orang orang_pertama;
  orang_pertama.tahun_lahir = 1998;
  orang_pertama.tahun_sekarang = 2024;
  orang_pertama.nama = "rizki";
  orang_pertama.tampilkanUmurSekarang();
  return 0;
}
