#include <iostream>
#include <string>

class Pekerja {

public:
  Pekerja(std::string nama, int id) {
    nama_pekerja = nama;
    id_pekerja = id;
  }

  void bekerja() {
    std::cout << nama_pekerja << " sedang bekerja keras" << std::endl;
  }

  void ingpo_pekerja() {
    std::cout << "nama: " << nama_pekerja << " | ID: " << id_pekerja
              << std::endl;
  }

protected:
  std::string nama_pekerja;
  int id_pekerja;
};

class Mahasiswa {
public:
  Mahasiswa(std::string jurusan, int nim) {
    jurusan_mahasiswa = jurusan;
    nim_mahasiswa = nim;
  }

  void belajar() {
    std::cout << "mahasiswa dengan nim: " << nim_mahasiswa << " sedang belajar"
              << std::endl;
  }

  void ingpo_mahasiswa() {
    std::cout << "jurusan: " << jurusan_mahasiswa << " nim: " << nim_mahasiswa
              << std::endl;
  }

protected:
  std::string jurusan_mahasiswa;
  int nim_mahasiswa;
};

class MahasiswaPekerja : public Pekerja, public Mahasiswa {

public:
  MahasiswaPekerja(std::string nama, int id, std::string jurusan, int nim,
                   std::string status)
      : Pekerja(nama, id), Mahasiswa(jurusan, nim) {
    status_kerja = status;
  }

  void tampilkan_profil_lengkap() {
    ingpo_pekerja();
    ingpo_mahasiswa();
    std::cout << "status kerja: " << status_kerja << std::endl;
    std::cout << "nimnya: " << nim_mahasiswa << std::endl;
  }

private:
  std::string status_kerja;
};

int main() {
  MahasiswaPekerja arfy("arfy", 202, "compute science", 5678, "freelance");

  // arfy.bekerja();
  // arfy.tampilkan_profil_lengkap();
  // arfy.belajar();
  // arfy.ingpo_mahasiswa();
  arfy.tampilkan_profil_lengkap();

  return 0;
}
