#include <iostream>
#include <string>

class KueUlangTahun {
public:
  KueUlangTahun() {
    rasa_kue = "vanilla";
    ukuran_kue = "sedang";
    tulisan_di_kue = "selamat ulang tahun";
    jumlah_lilin = 1;

    std::cout << "kue default dibuat dengan rasa: " << rasa_kue
              << " ukuran: " << ukuran_kue << std::endl;
  }

  KueUlangTahun(std::string rasa) {
    rasa_kue = rasa;
    ukuran_kue = "sedang";
    tulisan_di_kue = "selamat ulang tahun";
    jumlah_lilin = 1;

    std::cout << "kue dengan rasa: " << rasa_kue
              << " ukuran (standar) sudah dibuat" << std::endl;
  }

  KueUlangTahun(std::string rasa, std::string ukuran, std::string tulisan,
                int lilin) {
    rasa_kue = rasa;
    ukuran_kue = ukuran;
    tulisan_di_kue = tulisan;
    jumlah_lilin = lilin;

    std::cout << "kue dengan rasa: " << rasa_kue
              << " dan ukurannya: " << ukuran_kue
              << " dan jumlah lilin: " << jumlah_lilin << " sudah dibuat"
              << std::endl;

    std::cout << "ucapan di kue adalah: " << tulisan_di_kue << std::endl;
  }

  void tampilkan_kue() const {
    std::cout << "rasa: " << rasa_kue << std::endl;
    std::cout << "ukuran: " << ukuran_kue << std::endl;
    std::cout << "tulisan: " << tulisan_di_kue << std::endl;
    std::cout << "lilin: " << jumlah_lilin << std::endl;
  }

private:
  std::string rasa_kue, ukuran_kue, tulisan_di_kue;
  int jumlah_lilin;
};

int main() {

  // KueUlangTahun kue_pertama;
  // kue_pertama.tampilkan_kue();

  // KueUlangTahun kue_kedua("mangga");
  // kue_kedua.tampilkan_kue();
  
  KueUlangTahun kue_ketiga("mangga", "jumbo", "selamat ulang tahun arfy slowy", 25);
  kue_ketiga.tampilkan_kue();

  return 0;
}
