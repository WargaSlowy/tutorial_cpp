#include <iostream>
#include <string>

class Pegawai {
private:
  std::string nama_pegawai;
  int id_pegawai;
  double gaji_pegawai;

public:
  Pegawai() {
    nama_pegawai = "tidak ada";
    id_pegawai = 0;
    gaji_pegawai = 0.0;
    
    std::cout << "default dari data pegawai sudah terbuat" << std::endl;
  }

  Pegawai(std::string nama, int id, double gaji) {
    nama_pegawai = nama;
    id_pegawai = id;
    gaji_pegawai = gaji;

    std::cout << "pegawai dengan nama: " << nama_pegawai << " sudah terbuat" << std::endl;
  }

  void atur_gaji(double gaji) {
    gaji_pegawai = gaji;
  }

  double dapatkan_gaji() const {
    return gaji_pegawai;
  }

  void tampilkan_ingpo() const {
    std::cout << "nama: " << nama_pegawai << std::endl;
    std::cout << "id: " << id_pegawai << std::endl;
    std::cout << "gaji: Rp." << gaji_pegawai << std::endl;
  }

  double hitung_tunjangan() const {
    return gaji_pegawai * 0.1;
  }
};

void proses_pegawai_dengan_pointer(Pegawai* pointer_pegawai) {
  std::cout << "proses pegawai melalui dari pointer" << std::endl;

  if (pointer_pegawai != nullptr) {
    pointer_pegawai->tampilkan_ingpo();
    std::cout << "tunjangan gaji: Rp." << pointer_pegawai->hitung_tunjangan() << std::endl;
  } else {
    std::cout << "tidak ada data pegawai untuk kita proses" << std::endl;
  }
}

Pegawai* buat_pegawai_baru(std::string nama, int id, double gaji) {
  Pegawai* pointer_pegawai = new Pegawai(nama, id, gaji);
  return pointer_pegawai;
}

int main() {

  // Pegawai pegawai_pertama("arfy", 101, 52'000);
  //
  // Pegawai* pointer_pegawai = &pegawai_pertama;
  //
  // std::cout << "alamat objek dari si pegawai pertama: " << &pegawai_pertama << std::endl;

  // pointer_pegawai->tampilkan_ingpo();
  // (*pointer_pegawai).tampilkan_ingpo();

  Pegawai* pointer_pegawai_kedua = new Pegawai("arep", 102, 20'000);

  std::cout << "alamat objek dynamic: " << pointer_pegawai_kedua << std::endl;
  // pointer_pegawai_kedua->tampilkan_ingpo();
  pointer_pegawai_kedua->atur_gaji(45'000.0);
  // pointer_pegawai_kedua->tampilkan_ingpo();

  std::cout << "gaji tunjangan sekarang adalah: " << pointer_pegawai_kedua->hitung_tunjangan() << std::endl;

  delete pointer_pegawai_kedua;
  pointer_pegawai_kedua = nullptr;

  return 0;
}
