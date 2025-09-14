#include <iostream>
#include <string>

// public
// private
// protected

class Pegawai {
public:
  std::string nama_pegawai;
  int usia_pegawai;

  Pegawai(std::string nama, int usia, double gaji) {
    nama_pegawai = nama;
    usia_pegawai = usia;
    gaji_dasar = gaji;
  }

  double dapatkan_ingpo_gaji() {
    return gaji_dasar;
  }

  void ingpo_pegawai() {
    std::cout << "nama: " << nama_pegawai << std::endl;
    std::cout << "usia: " << usia_pegawai << std::endl;
    std::cout << "gaji dasar: Rp." << gaji_dasar << std::endl;
  }

  void atur_bonus(double bonus) {
    if (bonus >= 0) {
      bonus_tahunan = bonus;
      std::cout << "bonus berhasil di setting di Rp." << bonus_tahunan << std::endl;
    } else {
      std::cout << "bonus tidak valid" << std::endl;
    }
  }

  double hitung_total() {
    return gaji_dasar + bonus_tahunan;
  }

  void atur_gaji(double gaji_baru)  {
    gaji_dasar = gaji_baru;
  }

  double informasi_gaji() {
    return gaji_dasar;
  }

private:
  double gaji_dasar;
  double bonus_tahunan;
};

int main() {

  Pegawai pegawai_pertama("arip", 26, 2'000);

  pegawai_pertama.ingpo_pegawai();

  // std::cout << "gaji dari si pegawai pertama: " << pegawai_pertama.dapatkan_ingpo_gaji() << std::endl;
  //
  // std::cout << "nama dari pegawai adalah: " << pegawai_pertama.nama_pegawai << std::endl;
  // std::cout << "usia dari pegawai adalah: " << pegawai_pertama.usia_pegawai << " tahun" << std::endl;
  //
  // pegawai_pertama.nama_pegawai = "james";
  // pegawai_pertama.usia_pegawai = 52;
  //
  // pegawai_pertama.ingpo_pegawai();
  pegawai_pertama.atur_gaji(20'000);
  pegawai_pertama.atur_bonus(30'000);

  std::cout << "gaji setalah update adalah: Rp." << pegawai_pertama.dapatkan_ingpo_gaji() << std::endl;
  std::cout << "total gajinya adalah: Rp." << pegawai_pertama.hitung_total() << std::endl;

  return 0;
}
