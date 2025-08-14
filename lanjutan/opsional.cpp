#include <optional>
#include <iostream>
#include <string>

// class Orang {
// public:
//   Orang(const std::string& n, int u) : nama(n), umur(u) {}
//
//   const std::string& ambil_nama() const {
//     return nama;
//   }
//
//   int ambil_umur() const {
//     return umur;
//   }
//
//   void print() {
//     std::cout << "nama: " << nama << ", umur adalah: " << umur << " tahun" << std::endl;
//   }
//
// private:
//   std::string nama;
//   int umur;
// };
//
// std::optional<Orang> buat_orang(const std::string& nama, int umur) {
//   if (nama.empty() || umur < 0 || umur > 150) {
//     return std::nullopt;
//   }
//
//   return Orang(nama, umur);
// }

int main() {
  // std::optional<int> nilai_kosong;
  // std::optional<int> nilai_kita(30);
  // std::optional<int> nilai_lain = 40;
  //
  // if (nilai_kita.has_value()) {
  //   std::cout << "nilai dari nilai kita adalah: " << nilai_kita.value() << std::endl;
  // } else {
  //   std::cout << "nilai kita tidak ada" << std::endl;
  // }

  // if (!nilai_kosong.has_value()) {
  //   std::cout << "nilai kosong ini tidak ada" << std::endl;
  // }

  // if (nilai_lain) {
  //   std::cout << "nilai ini memiliki value: " << *nilai_lain << std::endl;
  // }
  //
  // std::cout << "nilai default dari variabel nilai_kosong adalah: " << nilai_kosong.value_or(-1) << std::endl;

  // auto orang_pertama = buat_orang("arfy", 25);
  // if (orang_pertama.has_value()) {
  //   orang_pertama->print();
  // }

  // auto orang_kedua = buat_orang("", -5);
  // if (!orang_kedua) {
  //   std::cout << "gagal membuat orang" << std::endl;
  // }

  // Orang orang_default("unknown", 0);
  // auto orang_ketiga = buat_orang("", 25).value_or(orang_default);
  // orang_ketiga.print();

  std::optional<std::string> data;

  // if (data.has_value()) {
  //   std::cout << "data ini ada valuenya: " << data.value() << std::endl;
  // }
  //
  // if (data) {
  //   std::cout << "ini ada datanya" << std::endl;
  // }
  //
  // if (data) {
  //   std::cout << "tampil dengn operator derefence: " << *data << std::endl;
  // }
  //
  // if (data) {
  //   std::cout << "kita panggil dengan operator -> : " << data->length() << std::endl;
  // }
  
  try {
    std::cout << "value dari si data: " << data.value() << std::endl;
  } catch (const std::bad_optional_access& error_pesan) {
    std::cout << "ERROR: " << error_pesan.what() << std::endl;
  }

  return 0;
}
