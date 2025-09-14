#include <iostream>
#include <string>

class AlatPembayaran {
public:
  virtual void bayar(double jumlah_uang) = 0;

  virtual void tampilkan_info() {
    std::cout << "menampilkan informasi pembayaran" << std::endl;
  }

  virtual ~AlatPembayaran() {
    std::cout << "alat pembayaran selesai digunakan" << std::endl;
  }
};

class KartuKredit : public AlatPembayaran {
public:
  KartuKredit(std::string bank, std::string nomor, double limit) {
    nama_bank = bank;
    nomor_kartu = nomor;
    limit_kartu = limit;
    tagihan_kartu = 0;
  }

  void bayar(double jumlah_uang) override {
    if (jumlah_uang + tagihan_kartu <= limit_kartu) {
      tagihan_kartu += jumlah_uang;
      std::cout << "pembayaran sukses via bank " << nama_bank
                << " jumlah uang: Rp" << jumlah_uang << " ditagihkan ke: Rp."
                << tagihan_kartu << std::endl;
    } else {
      std::cout << "gagal, melebihi batas dari limit kartu" << std::endl;
    }
  }

  void tampilkan_info() override {
    std::cout << "nama bank: " << nama_bank << std::endl;
    std::cout << "kartu: " << nomor_kartu << std::endl;
  }

  ~KartuKredit() {
    std::cout << "kartu " << nama_bank << " sudah dinonaktifkan" << std::endl;
  }

private:
  std::string nama_bank;
  std::string nomor_kartu;
  double limit_kartu;
  double tagihan_kartu;
};

int main() {

  AlatPembayaran* kartu_kredit = new KartuKredit("WargaSlowy", "67890123", 20'000);

  kartu_kredit->bayar(10'000);
  kartu_kredit->tampilkan_info();

  delete kartu_kredit;

  return 0;
}
