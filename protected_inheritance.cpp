// class classDasar {}
// class Turunan : protected classDasar {}
#include <iostream>
#include <string>

class Organisasi {
protected:
  std::string nama_organisasi;

public:
  Organisasi(std::string nama_org) : nama_organisasi(nama_org) {}

  void informasiOrganisasi() {
    std::cout << "nama organisasi: " << nama_organisasi << std::endl;
}
};

class Departemen : protected Organisasi {
private:
  std::string nama_departemen;

public:
  Departemen(std::string nama_org, std::string nama_dep) : Organisasi(nama_org), nama_departemen(nama_dep) {}

  void informasiDepartemen() {
    std::cout << "nama departemen: " << nama_departemen << std::endl;
  }

  void gantiNamaOrganisasi(std::string nama_org) {
    nama_organisasi = nama_org;
  }
};

int main() {
  Departemen dep("si titik koma", "WPU");
  dep.informasiDepartemen();
  dep.gantiNamaOrganisasi("Kelas terbuka");
  dep.informasiDepartemen();
  
  return 0;
}
