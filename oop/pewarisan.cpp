#include <iostream>
#include <string>

class Hewan {
public:
  Hewan(std::string nama, int usia) {
    nama_hewan = nama;
    usia_hewan = usia;

    std::cout << "hewan " << nama_hewan << " lahir" << std::endl;
  }

  void makan() { std::cout << nama_hewan << " sedang makan" << std::endl; }

  void ingpo_hewan() {
    std::cout << "nama: " << nama_hewan << ", usianya: " << usia_hewan
              << " tahun" << std::endl;
  }

protected:
  std::string nama_hewan;
  int usia_hewan;
};

class Kucing : public Hewan {

public:
  Kucing(std::string nama, int usia, std::string warna) : Hewan(nama, usia) {
    warna_bulu = warna;

    std::cout << "kucing berbulu " << warna_bulu << " hadir" << std::endl;
  }

  void mengeong() { std::cout << nama_hewan << " mengeong" << std::endl; }

  void tampilin_ingpo_kucing() {
    ingpo_hewan();
    std::cout << "warna bulu: " << warna_bulu << std::endl;
  }

private:
  std::string warna_bulu;
};

int main() {

  Kucing kucing_arfy("pico", 1, "abu-abu");
  kucing_arfy.tampilin_ingpo_kucing();
  kucing_arfy.makan();
  kucing_arfy.ingpo_hewan();

  return 0;
}
