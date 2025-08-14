#include <iostream>
#include <map>
#include <string>
#include <utility>

int main() {
  std::map<std::string, int> umur;

  umur["gusion"] = 25;
  umur["cici"] = 21;
  umur["balmond"] = 30;

  umur.insert({"freya", 27});
  umur.insert(std::make_pair("ela", 40));

  for (const auto& pasangan : umur) {
    std::cout << pasangan.first << " usianya adalah: " << pasangan.second << " tahun" << std::endl;
  }

  // std::string nama_yang_ingin_dicari = "cici";
  // if (umur.find("balmond") != umur.end()) {
  //   std::cout << "usia dari balmond  adalah: " << umur["balmond"] << " tahun" << std::endl;
  // }

  umur.erase("cici");
  std::cout << "\nData yang sebelumnya dihapus yaitu cici, tampilkan yang baru: ";
  for (const auto& pasangan_data : umur) {
    std::cout << pasangan_data.first << std::endl;
  }
  return 0;
}
