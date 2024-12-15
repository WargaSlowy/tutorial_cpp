// cstyle string char[]
// std::string <string>
// 1. gabung
// 2. pemotongan
// 3. cari karakter
// 4. modifikasi string, (tambah, hapus, ganti)
// 5. konversi tipe data
// 6. iterasi dan akses karakter
#include <iostream>
#include <string>

int main() {
  int angka = 1234;
  std::string ubah_ke_string = std::to_string(angka);

  std::cout << ubah_ke_string + " " + "slowy" << std::endl;
  return 0;
}
