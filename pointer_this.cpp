// this
// 1. otomatis ada
// 2. hanya tersedia dalam member function
// 3. menunjuk ke object saat ini
// 4. tidak di modifikasi
// 5. tidak tersedia dalam fungsi static
#include <iostream>

class Kotak {
private:
  int lebar, tinggi;

public:
  Kotak(int l, int t) : lebar(l), tinggi(t) {}

  Kotak &operator+=(const Kotak &nilai_alamat) {
    this->lebar += nilai_alamat.lebar;
    this->tinggi += nilai_alamat.tinggi;
    return *this;
  }

  void hasilKalkulasi() {
    std::cout << "lebar:" << lebar <<", tinggi: " << tinggi << std::endl;
  }
};

int main() {
  Kotak kotak_pertama(10, 20);
  Kotak kotak_kedua(5, 10);

  kotak_pertama += kotak_kedua;
  kotak_pertama.hasilKalkulasi();
  return 0;
}
