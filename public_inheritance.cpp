// class kelasDasar{
//
// }
//
// class Turunan : public kelasDasar {
//
// }
#include <iostream>
#include <string>

class Kendaraan {
protected:
  std::string nama;
  int kecepatan;

public:
  Kendaraan(std::string n, int k) : nama(n), kecepatan(k) {}

  void informasiKendaraan() {
    std::cout << "nama kendaraan: " << nama << std::endl;
    std::cout << "kecepatan kendaraan: " << kecepatan << std::endl;
  }

  virtual void klakson() {
    std::cout << "kendaraan mengeluarkan klakson " << std::endl;
  }
};

class Mobil : public Kendaraan {
private:
  int kursi;

public:
  Mobil(std::string n, int k, int jumlah_kursi) : Kendaraan(n, k), kursi(jumlah_kursi) {}

  void inforKursiMobil() {
    std::cout << "jumlah kursi pada mobil: " << kursi << std::endl;
  }

  void klakson() override {
    std::cout << nama << " bersuara: bim bim bim" << std::endl;
  }
};

int main() {
  Kendaraan kendaraan("dasar class kendaran", 80);
  kendaraan.informasiKendaraan();
  kendaraan.klakson();

  Mobil mobil("Chevrolet", 250, 4);
  
  Kendaraan* kendaraan_pointer = &mobil;
  kendaraan_pointer->informasiKendaraan();
  kendaraan_pointer->klakson();


  return 0;
}
