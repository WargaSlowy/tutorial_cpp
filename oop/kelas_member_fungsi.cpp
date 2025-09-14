#include <iostream>
#include <string>

class Mahasiswa {
public:
  Mahasiswa(std::string nama, int nomor_induk, double ipk, int sks) {
    nama_mahasiswa = nama;
    nim = nomor_induk;
    nilai_ipk = ipk;
    jumlah_sks = sks;
  }

  void ingpo_mahasiswa() {
    std::cout << "nama: " << nama_mahasiswa << std::endl;
    std::cout << "nim: " << nim << std::endl;
    std::cout << "ipk: " << nilai_ipk << std::endl;
    std::cout << "sks: " << jumlah_sks << std::endl;
  }

  bool apakah_lulus() {
    if (nilai_ipk >= 2.0) {
      return true;
    } else {
      return false;
    }
  }

  void tambah_sks(int sks_tambahan) {
    jumlah_sks += sks_tambahan;
    std::cout << "sks sudah ditambahkan, total sks sekarang adalah: "
              << jumlah_sks << std::endl;
  }

  std::string dapatkan_predikat() {
    if (nilai_ipk >= 3.5) {
      return "kamu dapat cumlaude";
    } else if (nilai_ipk >= 3.0) {
      return "nilai kamu memuaskan";
    } else {
      return "nilia kamu cukup";
    }
  }

  std::string ingpo_nama_mahasiswa() {
    return nama_mahasiswa;
  }

  int ingpo_jumlah_sks_mahasiswa() {
    return jumlah_sks;
  }

  void atur_nilai_ipk(double nilai_baru) {
    nilai_ipk = nilai_baru;
  }

  double ingpo_nilai_ipk() {
    return nilai_ipk;
  }

private:
  std::string nama_mahasiswa;
  int nim;
  double nilai_ipk;
  int jumlah_sks;
};

int main() {
  Mahasiswa mahasiswa_pertama("james mono", 45678, 3.75, 110);
  Mahasiswa mahasiswa_kedua("arfy", 56789, 3.02, 200);

  mahasiswa_kedua.ingpo_mahasiswa();

  // mahasiswa_pertama.ingpo_mahasiswa();
  //
  // std::cout << "status kelulusan: " << (mahasiswa_pertama.apakah_lulus() ? "lulus" : "tidak lulus") << std::endl;
  // mahasiswa_pertama.tambah_sks(90);
  //
  // std::cout << "nama mahasiswa adalah: " << mahasiswa_pertama.ingpo_nama_mahasiswa() << std::endl;
  // std::cout << "jumlah sks mahasiswa: " << mahasiswa_pertama.ingpo_jumlah_sks_mahasiswa() << std::endl;
  //
  // std::cout << std::endl;
  //
  // mahasiswa_kedua.tambah_sks(90);
  // std::cout << "jumlah sks dari si arfy adalah: " << mahasiswa_kedua.ingpo_jumlah_sks_mahasiswa() << std::endl;
  //
  // std::cout << "status predikat dari nama " << mahasiswa_pertama.ingpo_nama_mahasiswa() << " dengan predikat: " << mahasiswa_pertama.dapatkan_predikat() << std::endl;

  mahasiswa_kedua.atur_nilai_ipk(3.52);
  std::cout << mahasiswa_kedua.ingpo_nilai_ipk() << std::endl;

  mahasiswa_kedua.ingpo_mahasiswa();

  return 0;
}
