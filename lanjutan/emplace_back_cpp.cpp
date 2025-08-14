// nama_dari_vektor.emplace_back(nilai);
#include <iostream>
#include <string>
#include <vector>

class Murid {
public:
  std::string nama;
  int usia;

  Murid(std::string n, int u) : nama(n), usia(u) {
    std::cout << "murid: " << nama << " sudah dibuat" << std::endl;
  }

  ~Murid() { std::cout << nama << " sudah dihapus" << std::endl; }
};

int main() {
  // std::vector<std::string> nama;
  //
  // nama.emplace_back("james");
  // nama.emplace_back("dims");
  //
  // for (const auto& info_nama : nama) {
  //   std::cout << info_nama << " ";
  // }
  // std::cout << std::endl;
  
  std::vector<Murid> daftar_murid;

  daftar_murid.emplace_back("dims", 15);
  daftar_murid.emplace_back("stone", 17);
  daftar_murid.emplace_back("gerath", 15);

  for (const auto& murid : daftar_murid) {
    std::cout << "Nama: " << murid.nama << ", usia: " << murid.usia << std::endl;
  }
  std::cout << std::endl;

  std::cout << "size / jumlah elemen: " << daftar_murid.size() << std::endl;
  std::cout << "kapasitas memori: " << daftar_murid.capacity() << std::endl;

  return 0;
}
