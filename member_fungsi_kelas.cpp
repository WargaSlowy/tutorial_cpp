// 1. deklarasi
//    - member function dideklarasikan di dalam definisi kelas
//    - bisa dideklarasikan di bagian modifikasi akses -> public, private,
//    protected
// 2. definisi -> inline function :: <- scope resolution
// 3. aksebilitas
//
// 1. inline
// 2. outline
// 3. static member function
// 4. const member function
// 5. friend function
#include <iostream>
#include <string>

/**
class Mobil {
public:
  std::string nama;

  void tampilkanInformasiMobil() {
    std::cout << "nama mobil: " << nama << std::endl;
  }
};
**/
/**
class Orang {
public:
  std::string nama;

  void tampilkanNama();
};

void Orang::tampilkanNama() {
  std::cout << "nama: " << nama << std::endl;
}
**/

/**
class Hitung {
private:
  static int hitung_angka;

public:
  static void tambahkan() {
    hitung_angka++;
  }

  static void tampilkanHitung() {
    std::cout << "hitung: " << hitung_angka << std::endl;
  }
};

int Hitung::hitung_angka = 0;

**/

/**
class Mobil {
private:
  std::string nama;
  int tahun_keluaran;

public:
  Mobil(std::string n, int t) : nama(n), tahun_keluaran(t) {}

  void tampilkanInfo() const {
    std::cout << "nama mobil: " << nama << std::endl;
    std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
  }
};
**/

/**
class Kotak {
private:
  double lebar;

public:
  Kotak(double l) : lebar(l) {}

  friend void tampilkanInfoKotak(const Kotak &k);
};

void tampilkanInfoKotak(const Kotak &k) {
  std::cout << "lebar kotak adalah " << k.lebar << std::endl;
}
**/

class Mobil {
private:
  std::string nama;

public:
  Mobil(std::string n) : nama(n) {}

  void tampilkanInfo() { std::cout << "nama mobil: " << this->nama << std::endl; }
};

int main() { 
  Mobil mobil_pertama("Ferrari");
  mobil_pertama.tampilkanInfo();
  return 0; 
}
