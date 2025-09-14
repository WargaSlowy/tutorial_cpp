#include <iostream>
#include <string>

// attribut
// metode
// object

class Mobil {

private:
  std::string merk;
  int tahun_produksi;
  std::string warna;

public:
  Mobil(std::string merk_mobil, int tahun_mobil, std::string warna_mobil) {
    merk = merk_mobil;
    tahun_produksi = tahun_mobil;
    warna = warna_mobil;
  }

  void nyalakan_mesin() {
    std::cout << "mesin mobil " << merk << " hidup / menyala" << std::endl;
  }

  void klakson() {
    std::cout << "bim bim dari mobil " << merk << std::endl;
  }

  void ingpo_mobil() {
    std::cout << "merk mobil: " << merk << std::endl;
    std::cout << "tahun produksi mobil: " << tahun_produksi << std::endl;
    std::cout << "warna mobil: " << warna << std::endl;
  }
};

int main() {
  Mobil mobil_jaguar("jaguar sport x20", 2025, "hijau");
  Mobil mobil_buggati("buggati xp450", 2025, "merah");

  mobil_jaguar.ingpo_mobil();
  mobil_jaguar.klakson();
  mobil_jaguar.nyalakan_mesin();
  
  std::cout << std::endl;

  mobil_buggati.ingpo_mobil();

  return 0;
}

