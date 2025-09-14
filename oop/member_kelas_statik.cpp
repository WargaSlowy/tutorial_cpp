#include <iostream>
#include <string>

class Mahasiswa {

public:
  Mahasiswa(std::string nama, int nim) {
    nama_mahasiswa = nama;
    nim_mahasiswa = nim;
    jumlah_total_mahasiswa++;

    std::cout << "nama mahasiswa: " << nama_mahasiswa << " sudah terdaftar"
              << std::endl;
  }

  void info_mahasiswa() {
    std::cout << "nama: " << nama_mahasiswa << std::endl;
    std::cout << "nim: " << nim_mahasiswa << std::endl;

    std::cout << "nama kampus: " << nama_universitas << std::endl;
  }

  static void atur_nama_universitas(std::string nama) {
    nama_universitas = nama;
    std::cout << "nama universitas diubah menjadi: " << nama_universitas << std::endl;
  }

  static int ingfo_jumlah_mahasiswa() {
    return jumlah_total_mahasiswa;
  }

  static void tampilkan_info_kampus() {
    std::cout << "nama kampus: " << nama_universitas << std::endl;
    std::cout << "jumlah mahasiswa: " << jumlah_total_mahasiswa << " mahasiswa" << std::endl;
  }

  static Mahasiswa buat_mahasiswa(std::string nama, int nim) {
    return Mahasiswa(nama, nim);
  }

private:
  std::string nama_mahasiswa;
  int nim_mahasiswa;

  static int jumlah_total_mahasiswa;
  static std::string nama_universitas;
};

int Mahasiswa::jumlah_total_mahasiswa = 0;
std::string Mahasiswa::nama_universitas = "universitas awikwok";
Mahasiswa mahasiswa_kedua = Mahasiswa::buat_mahasiswa("arep", 1234);

int main() {

  Mahasiswa::tampilkan_info_kampus();

  Mahasiswa mahasiswa_pertama("arfy", 56789);

  // std::cout << std::endl;
  // Mahasiswa::tampilkan_info_kampus();
  //
  // Mahasiswa::atur_nama_universitas("universitas jmk48");
  //
  // std::cout << std::endl;
  //
  // Mahasiswa::tampilkan_info_kampus();
  mahasiswa_kedua.info_mahasiswa();

  return 0;
}
