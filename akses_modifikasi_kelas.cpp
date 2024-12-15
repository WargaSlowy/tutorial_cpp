// 1. public
// 2. private
// 3. protected
#include <iostream>
#include <string>

class AkunBank {
private:
  double saldo;

protected:
  std::string nama_nasabah;

public:
  AkunBank(std::string n, double s) {
    nama_nasabah = n;
    saldo = s;
  }

  void deposit(double jumlah) {
    if (jumlah > 0) {
      saldo += jumlah;
      std::cout << "saldo berhasil ditambah" << std::endl;
    } else {
      std::cout << "jumlah saldo harus positif" << std::endl;
    }
  }

  void tampilkanInfoAkunBank() {
    std::cout << "pemilik: " << nama_nasabah << std::endl;
    std::cout << "saldo: Rp." << saldo << std::endl;
  }
};


int main() {
  AkunBank akun_pertama("arfy", 200.00)

  return 0;
}
