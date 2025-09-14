#include <iostream>
#include <string>

class MakhlukHidup {
public:
  MakhlukHidup(std::string nama, int usia) {
    nama_makhluk = nama;
    usia_makhluk = usia;
  }

  void bernapas() {
    std::cout << nama_makhluk << " sedang bernapas" << std::endl;
  }

protected:
  std::string nama_makhluk;
  int usia_makhluk;
};

class Manusia : public MakhlukHidup {
public:
  Manusia(std::string nama, int usia, std::string pekerjaan)
      : MakhlukHidup(nama, usia) {
    pekerjaan_manusia = pekerjaan;
  }

  void bekerja() {
    std::cout << nama_makhluk << " adalah seorang " << pekerjaan_manusia
              << std::endl;
  }

protected:
  std::string pekerjaan_manusia;
};

class Programmer : public Manusia {
public:
  Programmer(std::string nama, int usia, std::string pekerjaan,
             std::string bahasa)
      : Manusia(nama, usia, pekerjaan) {
    bahasa_pemrograman = bahasa;
  }

  void ngoding() {
    bernapas();
    bekerja();
    std::cout << nama_makhluk << " menggunakan bahasa pemrograman "
              << bahasa_pemrograman << std::endl;
  }

private:
  std::string bahasa_pemrograman;
};

int main() {
  Programmer arfy("arfy", 24, "swe", "c++");

  // arfy.ngoding();
  arfy.bernapas();
  arfy.bekerja();
  arfy.ngoding();

  return 0;
}
