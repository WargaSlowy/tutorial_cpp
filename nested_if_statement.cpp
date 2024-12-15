// if (kondisi) {
//    if (kondisi) {
//      askdoakosd
//    } else {
//      oawkoakoakw
//    }
// }
#include <iostream>
#include <string>

int main() {
  /*int usia;*/
  /*std::cout << "masukkan usia kamua: ";*/
  /*std::cin >> usia;*/
  /**/
  /*if (usia >= 0) {*/
  /*  if (usia < 13) {*/
  /*    std::cout << "kamu masih bocil " << std::endl;*/
  /*  } else if (usia >= 13 && usia <= 19) {*/
  /*    std::cout << "kamu sudah remaja " << std::endl;*/
  /*  } else {*/
  /*    std::cout << "kamu sudah dewasa" << std::endl;*/
  /*  }*/
  /*} else {*/
  /*  std::cout << "hey usia tidak valid karena kamu memasukkan angka " <<
   * usia*/
  /*            << std::endl;*/
  /*}*/

  std::string username, password;

  std::cout << "masukkan username: ";
  std::cin >> username;

  if (username == "admin") {
    std::cout << "masukkan password: ";
    std::cin >> password;

    if (password == "445") {
      std::cout << "hey kamu berhasil login " << std::endl;
    } else {
      std::cout << "password salah !" << std::endl;
    }
  } else {
    std::cout << "username tidak dikenal" << std::endl;
  }
  return 0;
}
