#include <cstddef>
#include <string>
#include <unordered_set>
#include <iostream>
#include <vector>

int main() {
  std::unordered_multiset<int> angka;
  // std::unordered_multiset<std::string> warna;
  // std::unordered_multiset<float> nilai;

  // angka.insert(85);
  // angka.insert(17);
  // angka.insert(5);
  // angka.insert(5);
  // angka.insert(92);
  // angka.insert(85);
  // angka.insert(88);
  angka.insert({85, 85, 90, 30, 20, 100, 85, 78, 76, 77, 32, 11});
  
  // warna.insert({"merah", "kuning", "hijau", "merah darah", "merah putih"});
  
  // std::vector<int> vektor = {50, 60, 50};
  // angka.insert(vektor.begin(), vektor.end());
  //
  // std::cout << "jumlah total nilai yang ada adalah: " << angka.size() << std::endl;
  //
  for (const auto& nilai : angka) {
    std::cout << nilai << " ";
  }
  std::cout << std::endl;
  //
  // int nilai_yang_kita_cari = 85;
  // size_t frekuensi_nilai = angka.count(nilai_yang_kita_cari);
  // std::cout << "nilai " << nilai_yang_kita_cari << " muncul sebanyak " << frekuensi_nilai << " kali" << std::endl;

  // auto cari = warna.find("biru");
  // if (cari != warna.end()) {
  //   std::cout << "warna yang kamu cari ketemu" << std::endl;
  // } else {
  //   std::cout << "warna yang dicari enggak ada" << std::endl;
  // }

  angka.erase(100);

  std::cout << "nilai 100 dihapus, tampilkan nilai sekarang:" << std::endl;
  for (const auto& nilai : angka) {
    std::cout << nilai << " ";
  }
  std::cout << std::endl;

  return 0;
}
