// 1. mengurangi kompleksitas
// 2. keamanan
// 3. penyerderhanaan
//
// 1. abstraksi melalui kelas
// 2. abstraksi melalui kelas abstrak dan fungsi virtual
#include <iostream>

class AkunBank {
protected:
  double saldo;

public:
  AkunBank(double saldo) : saldo(saldo) {}
  virtual void tabung(double jumlah) = 0;

  void tarik_uang(double jumlah) {
    if (jumlah <= saldo) {
      saldo -= jumlah;
      std::cout << "penarikan berhasil, silahkan ambil uang anda " << std::endl;
    } else {
      std::cout << "tidak ada saldo pada atm kamu" << std::endl;
    }
  }

  double lihatSaldo() const {
    return saldo;
  }
};

class TabungAkun : public AkunBank {
public:
  TabungAkun(double saldo) : AkunBank(saldo) {}

  void tabung(double jumlah) override {
    saldo += jumlah;
    std::cout << "jumlah deposit uang adalah " << jumlah << std::endl;
    std::cout << "jumlah uang sekarang adalah: Rp." << saldo << std::endl;
  }
};

int main() {
  TabungAkun akunSaya(250000.00);
  akunSaya.tabung(20000.00);
  akunSaya.tarik_uang(50000.00);
  std::cout << "saldo kita sekarang adalah: " << akunSaya.lihatSaldo() << std::endl;
  return 0;
}
