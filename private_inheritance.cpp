// class DasarKelas {};
// class KelasTurunan : private KelasDasar {};
// class B {}
#include <iostream>
#include <string>

class Mesin {
private:
  int tenaga_mesin;

protected:
  std::string jenis_bahan_bakar;

public:
  Mesin(int tm, std::string jenis_bbm) : tenaga_mesin(tm), jenis_bahan_bakar(jenis_bbm) {}

  void informasiMesin() {
    std::cout << "tenaga mesin: " << tenaga_mesin << " kuda" << std::endl;
    std::cout << "jenis bbm: " << jenis_bahan_bakar << std::endl;
  }
};

class Mobil : private Mesin {
private:
  std::string nama_mobil;
  std::string perusahaan;

public:
  Mobil(std::string nm, std::string p, int tm, std::string jenis_bbm) : Mesin(tm, jenis_bbm), nama_mobil(nm), perusahaan(p) {}

  void informasiMobil() {
    std::cout << "nama mobil: " << nama_mobil << std::endl;
    std::cout << "perusahaan: " << perusahaan << std::endl;
    informasiMesin();
  }

  void settingJenisBahanBakar(std::string nama_bbm) {
    jenis_bahan_bakar = nama_bbm;
  }
};

int main() {
  Mobil mobil("Ferrari", "Ferrari", 400, "pertalite");

  mobil.informasiMobil();
  
  mobil.settingJenisBahanBakar("aftur");
  mobil.informasiMobil();
}
