// pengendalian akses
// keterbacaan
// fleksibilitas
//
// 1. private: data anggta
// 2. protected: data anggota dapat diakses dari kelas turunan
// 3. public: data anggota dapat diakses dimanapun
#include <iostream>
#include <string>

class AkunBank {
private:
  std::string nama_pemilik_akun;
  double saldo;

public:
  AkunBank(std::string nama, double nilai_saldo) {
    nama_pemilik_akun = nama;
    saldo = nilai_saldo;
  }

  std::string ambilNamaPemilikAkun() const { return nama_pemilik_akun; }

  void settingNamaPemilikAkun(std::string nama) {
    if (!nama.empty()) {
      nama_pemilik_akun = nama;
    } else {
      std::cout << "kamu memasukkan field salah" << std::endl;
    }
  }

  double ambilSaldo() const { return saldo; }

  void deposit(double jumlah) {
    if (jumlah > 0) {
      saldo += jumlah;
      std::cout << "di depositkan sejumlah: " << jumlah << std::endl;
      std::cout << "jumlah uang sekarang adalah: Rp." << saldo << std::endl;
    } else {
      std::cout << "invalid nilainya" << std::endl;
    }
  }

  void tarikUang(double jumlah) {
    if (jumlah > 0 && jumlah <= saldo) {
      saldo -= jumlah;
      std::cout << "menarik uang sebanyak " << jumlah << std::endl;
      std::cout << "sisa uang sekarang adalah: Rp." << saldo << std::endl;
    } else {
      std::cout << "kamu memasukkan nilai yang salah!" << std::endl;
    }
  }
};

int main() {
  AkunBank akunSaya("arfy", 400000.00);

  std::cout << "nama pemilik akun: " << akunSaya.ambilNamaPemilikAkun()
            << std::endl;
  std::cout << "saldo dari pemilik akun " << akunSaya.ambilNamaPemilikAkun()
            << " adalah: Rp." << akunSaya.ambilSaldo() << std::endl;

  akunSaya.deposit(200000.00);
  akunSaya.tarikUang(400000.00);
  return 0;
}
