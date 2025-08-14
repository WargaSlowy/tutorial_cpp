// tampilin() file_b.cpp
// tampilin() file_a.cpp
//
// namespace NamaDariNamespace {
//      blok
// }

#include <cmath>
#include <iostream>
#include <string>
// namespace Matematika {
// int kalkulasi(int a, int b) { return a + b; }
// double nilai_pi = 3.141592;
// } // namespace Matematika
//
// namespace Fisika {
// double nilai_gravitasi = 9.8;
// int kalkulasi(int a, int b) { return a + b + 1; }
// } // namespace Fisika
//
// int main() {
//   std::cout << "hasil nilai kalkulasi fisika adalah: " <<
//   Fisika::kalkulasi(20, 30) << std::endl; std::cout << "hasil nilai kalkulasi
//   mtk adalah: " << Matematika::kalkulasi(40, 30) << std::endl;
//
//   return 0;
// }

// namespace Kalkulator {
// int tambah(int a, int b) { return a + b; }
//
// int kurang(int a, int b) { return a - b; }
//
// float kuadrat(float x) { return x * x; }
// } // namespace Kalkulator
//
// namespace Trigonometri {
// float sinus(float derajat) {
//   float radian = derajat * 3.14159 / 180.0;
//   return std::sin(radian);
// }
//
// float cosinus(float derajat) {
//   float radian = derajat * 3.14159 / 180.0;
//   return std::cos(radian);
// }
// } // namespace Trigonometri
//
// namespace UserInterface {
// void cetak_print() { std::cout << "aplikasi kalkulator" << std::endl; }
//
// void cetak_hasil(const std::string &operasi, float hasil) {
//   std::cout << "hasilnya adalah: " << operasi << ": " << hasil << std::endl;
// }
// } // namespace UserInterface
//
// int main() {
//   UserInterface::cetak_print();
//
//   int hasil_tambah = Kalkulator::tambah(5, 7);
//   UserInterface::cetak_hasil("tambah", hasil_tambah);
//
//   float hasil_sinus = Trigonometri::sinus(30);
//   UserInterface::cetak_hasil("sin(30 derajat)", hasil_sinus);
//
//   return 0;
// }

// namespace Data {
// namespace Profile {
// namespace Alamat {
// void cetak_alamat() {
//   std::cout << "alamat tempat tinggal arfy adalah: indonesia" << std::endl;
// }
// } // namespace Alamat
// } // namespace Profile
// } // namespace Data

namespace Data::Profile::Alamat {
void cetak_alamat() {
  std::cout << "alamat tempat tinggal arfy adalah: indonesia" << std::endl;
}
}


int main() {
  Data::Profile::Alamat::cetak_alamat();

  return 0;
}
