// 1. memiliki kata kunci inline
// 2. compiler akan mencboa ganti panggil fugnsi dengan isi dari fungsi
//    - fungsi terlalu besar
//    - fungsi menggunakan fitur kompleks rekursif
//
// inline tipe_data_return nama_fungis(parameter) {
//    ... 
// }
#include <iostream>

/*inline int tambah(int a, int b) {*/
/*  return a + b;*/
/*}*/

/*class Hitung {*/
/*private:*/
/*  int nilai1, nila2;*/
/**/
/*public:*/
/*  Hitung(int a, int b) : nilai1(a), nila2(b) {}*/
/**/
/*  int tambah() {*/
/*    return nilai1 + nila2;*/
/*  }*/
/*};*/

class Lingkaran {
private:
  double radius;

public:
  Lingkaran(double r) : radius(r) {}

  void settingRadius(double r) {
    radius = r;
  }

  double kalkulasiRadius() const {
    return radius;
  }

  double kalkulasi() const {
    return 3.14159 * radius * radius;
  }
};

int main() {
  Lingkaran l(5.0);
  std::cout << "nilai radius yang diketahui " << l.kalkulasiRadius() << std::endl;
  std::cout << "hasilnya adalah " << l.kalkulasi();
  
  return 0;
}
