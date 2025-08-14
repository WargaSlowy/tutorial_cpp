#include <cstddef>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

int main() {
  // std::unordered_multimap<std::string, int> nilai_siswa;
  //
  // nilai_siswa.insert({"andi", 80});
  // nilai_siswa.insert({"andi", 85});
  // nilai_siswa.insert({"budi", 72});
  // nilai_siswa.insert({"bill gates", 90});
  // nilai_siswa.insert({"elon musk", 45});
  // nilai_siswa.insert({"kiki", 78});
  // nilai_siswa.insert({"nizwa", 67});
  // nilai_siswa.insert({"avip", 89});
  //
  // nilai_siswa.insert(std::make_pair("diki", 70));
  //
  // nilai_siswa.insert({{"james", 100}, {"eurel", 80}, {"kiki", 50}});
  //
  // std::vector<std::pair<std::string, int>> vektor = {{"mamad", 50}, {"arfy",
  // 43}}; nilai_siswa.insert(vektor.begin(), vektor.end());
  //
  // nilai_siswa.emplace("iasjdiaoisjiodasd", 30);

  // std::cout << "jumlah total nilai yang ada di dalam nilai siswa adalah: " <<
  // nilai_siswa.size() << std::endl; std::cout << "cek apakah kosong ? : " <<
  // (nilai_siswa.empty() ? "ya" : "tidak kosong") << std::endl;
  //
  // for (const auto& pasangan : nilai_siswa) {
  //   std::cout << pasangan.first << " nilainya adalah: " << pasangan.second <<
  //   std::endl;
  // }
  // std::vector<std::string> data_siswa = {"andi", "bill gates", "nizwa",
  // "kiki"}; for (const auto& nama : data_siswa) {
  //   size_t jumlah_nilai = nilai_siswa.count(nama);
  //   std::cout << nama << " memiliki " << jumlah_nilai << " nilai " <<
  //   std::endl;
  // }
  // auto range = nilai_siswa.equal_range("andi");
  // std::cout << "nilai dari andi: " << std::endl;
  // for (auto it = range.first; it != range.second; ++it) {
  //   std::cout << " - " << it->second << std::endl;
  // }

  // auto cari = nilai_siswa.find("andi");
  // if (cari != nilai_siswa.end()) {
  //   std::cout << "nilai andi adalah: " << cari->second << std::endl;
  // }

  // size_t terhapus = nilai_siswa.erase("andi");
  // std::cout << "data dari si andi dihapus: " << terhapus << std::endl;
  // nilai_siswa.clear();
  // auto cari = nilai_siswa.find("andi");
  // if (cari != nilai_siswa.end()) {
  //   nilai_siswa.erase(cari);
  // }
  // for (const auto& pasangan : nilai_siswa) {
  //   std::cout << pasangan.first << " nilainya adalah: " << pasangan.second <<
  //   std::endl;
  // }

  std::unordered_multimap<std::string, int> data_skor;
  data_skor.insert({{"tim_perang", 80},
                    {"tim_mawar", 50},
                    {"tim_jagal", 90},
                    {"tim_perang", 87},
                    {"tim_jagal", 100}});

  // for (const auto &pasangan : data_skor) {
  //   std::cout << pasangan.first << " skornya: " << pasangan.second << std::endl;
  // }
  
  std::string nama_tim = "tim_perang";
  auto range = data_skor.equal_range(nama_tim);
  std::cout << "skor untuk tim perang adalah: " << std::endl;
  for (auto cari = range.first; cari != range.second; ++cari) {
    std::cout << " skor - " << cari->second << std::endl;
  }

  return 0;
}
