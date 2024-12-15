// new, delete
// int* nilai_pointer = new int;
// *nilai_pointer = 42;
// int* array_pointer = new int[5];
//
// delete
// delete[] nama_var_array;
#include <iostream>
#include <memory>
#include <string>

class Siswa {
public:
  std::string nama;
  Siswa(std::string nama) : nama(nama) {}
  void tampilkan() {
    std::cout << "nama siswa: " << nama << std::endl;
  }
};

int main() {
  // std::unique_ptr
  // std::shared_ptr
  // std::weak_ptr
  std::unique_ptr<Siswa> siswa_pertama = std::make_unique<Siswa>("James");
  siswa_pertama->tampilkan();

  return 0;
}
