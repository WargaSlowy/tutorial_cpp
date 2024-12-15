// nama, usia, gaji, posisi
// struct namaStruct {
//  std::string nama,
//  int usia,
//  double gaji,
//  std::string posisi;
// };
#include <iostream>
#include <string>

struct Karyawan {
  std::string nama;
  int umur;
  double gaji;
  std::string posisi;
};

int main() {
  Karyawan karyawan_pertama = {"Nizwa", 21, 6000000.00, "Software Engineer"};
  std::cout << "Nama: " << karyawan_pertama.nama << std::endl;
  std::cout << "umur: " << karyawan_pertama.umur << std::endl;
  std::cout << "gaji: Rp." << karyawan_pertama.gaji << std::endl;
  std::cout << "posisi kerja: " << karyawan_pertama.posisi << std::endl;
  return 0;
}
