// 1. nama constructor adalah sama denga nama kelas
// 2. tidak memiliki return,termasuk void
// 3. dapat menerima parameter
// 4. dipanggil secara otomatis saat si object dibuat
// jenis constructor
// - default constructor
// - parameterized constructor
// - copy constructor
#include <iostream>
#include <string>

/**
class Mobil {
public:
  std::string nama;
  int tahun_keluaran;

  Mobil() {
    nama = "Ferrari";
    tahun_keluaran = 2024;
    std::cout << "default constructor dibuat" << std::endl;
  }

  void tampilkanInformasiMobil() {
    std::cout << "nama mobil: " << nama << std::endl;
    std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
  }
};
**/

/**
class Siswa {
public:
  std::string nama;
  int kelas;

  Siswa(std::string n, int k) {
    nama = n;
    kelas = k;
    std::cout << "parameter constructor dibuat" << std::endl;
  }

  void tampilkanInfoSiswa() {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "kelas: " << kelas << std::endl;
  }
};
**/

class youtubeProgramming {
public:
  std::string nama_channel;
  int kode_channel;

  youtubeProgramming(std::string n, int k) {
    nama_channel = n;
    kode_channel = k;
  }

  youtubeProgramming(const youtubeProgramming &objek) {
    nama_channel = objek.nama_channel;
    kode_channel = objek.kode_channel;
    std::cout << "copy constructor dipanggil" << std::endl;
  }

  void tampilkanInfo() {
    std::cout << "nama channel: " << nama_channel << std::endl;
    std::cout << "kode channel: " << kode_channel << std::endl;
  }
};

int main() {
  youtubeProgramming youtube_pertama("wpu", 711);
  youtubeProgramming youtube_kedua = youtube_pertama;
  youtube_pertama.tampilkanInfo();
  youtube_kedua.tampilkanInfo();
  return 0;
}
