#include <cstddef>
#include <map>
#include <string>
#include <iostream>
#include <utility>
#include <vector>

int main() {
  // std::multimap<std::string, int> umur;
  //
  // umur.insert({"andi", 30});
  // umur.insert({"andi rista", 31});
  // umur.insert({"andi", 25});
  // umur.insert({"balmond", 45});
  // umur.insert({"julian", 25});
  //
  // umur.insert(std::make_pair("arfy", 21));
  // umur.insert(std::make_pair("nongpal", 20));
  //
  // umur.insert({{"mamad", 20}, {"asad", 32}, {"kiki", 22}});
  //
  // std::vector<std::pair<std::string, int>> vektor_nama = {{"nongpal kedua", 33}, {"nizwa", 42}};
  // umur.insert(vektor_nama.begin(), vektor_nama.end());
  //
  // umur.emplace("jokowi", 55);
  // umur.emplace("prabowo", 72);
  //
  // for (const auto& pasangan : umur) {
  //   std::cout << "nama: " << pasangan.first << ", umur: " << pasangan.second << std::endl;
  // }

  // std::cout << "jumlah total nilai dalam variabel umur adalah: " << umur.size() << std::endl;
  // std::cout << "apakah tidak ada nilai " << (umur.empty() ? "ya kosong" : "tidak kosong") << std::endl;
  //
  // std::vector<std::string> daftar_nama = {"balmond", "andi", "julian"};
  // for (const auto& nama : daftar_nama) {
  //   size_t jumlah_nilai_nama = umur.count(nama);
  //   std::cout << nama << " memiliki " << jumlah_nilai_nama << " nilai" << std::endl;
  // }

  // auto range_cari = umur.equal_range("andi");
  // std::cout << "value dari si andi:" << std::endl;
  // for (auto cari_data = range_cari.first; cari_data != range_cari.second; ++cari_data) {
  //   std::cout << " - " << cari_data->second << std::endl;
  // }

  // auto cari = umur.find("andi");
  // if (cari != umur.end()) {
  //   std::cout << "value dari si andi adalah: " << cari->second << std::endl;
  // }
  
  // size_t jumlah_dari_si_nongpal = umur.count("nongpal");
  // std::cout << "nongpal memiliki: " << jumlah_dari_si_nongpal << " data" << std::endl;
  
  // size_t yang_terhapus = umur.erase("andi");
  // umur.clear();
  // auto data_yang_dihapus = umur.find("andi");
  // if (data_yang_dihapus != umur.end()) {
  //   umur.erase(data_yang_dihapus);
  // }
  // std::cout << std::endl << "hasil setelah penghapusan:" << std::endl;
  //
  // for (const auto& pasangan : umur) {
  //   std::cout << "nama: " << pasangan.first << ", umur: " << pasangan.second << std::endl;
  // }
  
  std::multimap<std::string, int> skor_tim;

  skor_tim.insert({{"tim gajah", 40}, {"tim python", 60}, {"tim cpp", 90}, {"tim assembly", 100}, {"tim gajah", 30}});

  // for (const auto& pasangan : skor_tim) {
  //   std::cout << pasangan.first << " nilai: " << pasangan.second << std::endl;
  // }

  // std::string tim_yang_dicari = "tim gajah";
  // auto range = skor_tim.equal_range(tim_yang_dicari);
  // std::cout << "skor untuk si " << tim_yang_dicari << ": " << std::endl;
  // for (auto cari = range.first; cari != range.second; ++cari) {
  //   std::cout << "- " << cari->second << std::endl;
  // }

  for (auto data = skor_tim.rbegin(); data != skor_tim.rend(); ++data) {
    std::cout << data->first << " nilai: " << data->second << std::endl;
  }


  return 0;
}
