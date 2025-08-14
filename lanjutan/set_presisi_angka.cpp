#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

class SistemKeuangan {
public:
  SistemKeuangan() : saldo_total(0.0) {}

  void tambah_transaksi(const std::string &deskripsi, double jumlah,
                        const std::string &tanggal) {
    transaksi_list.push_back({deskripsi, jumlah, tanggal});
    saldo_total += jumlah;
  }

  void tampilin_laporan() {
    std::cout << std::fixed << std::setprecision(0);
    std::cout << std::left << std::setw(20) << "Tanggal" << std::setw(25)
              << "deskripsi" << std::setw(15) << "jumlah (rupiah)" << std::endl;

    for (const auto &transaksi : transaksi_list) {
      std::cout << std::left << std::setw(20) << transaksi.tanggal
                << std::setw(25) << transaksi.deskripsi << std::setw(15)
                << transaksi.jumlah << std::endl;
    }
    std::cout << std::left << std::setw(45) << "total uang saldo: Rp"
              << std::setw(12) << saldo_total << std::endl;
    std::cout << std::endl;
  }

private:
  struct Transaksi {
    std::string deskripsi;
    double jumlah;
    std::string tanggal;
  };

  std::vector<Transaksi> transaksi_list;
  double saldo_total;
};

int main() {
  // double angka_kecil = 123.45678901234;
  // double angka_kita_gede = 12345678.141592653210987654;
  // double angka_kecil_bet = 0.000000000123456789;

  // std::cout << "nilai dengan 10: " << std::setprecision(10)  <<
  // angka_kecil_bet << std::endl;
  //
  // std::cout << std::fixed;
  // std::cout << "nilai presisi 0: " << std::setprecision(0) << angka_kecil <<
  // std::endl; std::cout << "nilai presisi 2: " << std::setprecision(2) <<
  // angka_kecil << std::endl; std::cout << "nilai presisi 10: " <<
  // std::setprecision(10) << angka_kecil << std::endl; std::cout << "nilai
  // tidak pakai precision: " << angka_kita << std::endl; std::cout << "dengan
  // presisi di set 5: " << std::setprecision(5) << angka_kita << std::endl;
  // std::cout << "dengan presisi di set 15: " << std::setprecision(15) <<
  // angka_kita << std::endl;

  // std::cout << std::scientific;
  // std::cout << "nilai presisi 0: " << std::setprecision(2) << angka_kecil <<
  // std::endl; std::cout << "nilai presisi 6: " << std::setprecision(6) <<
  // angka_kecil << std::endl;

  SistemKeuangan keuangan;

  keuangan.tambah_transaksi("gaji bulanan", 1'500'000.00, "2024-99-99");
  keuangan.tambah_transaksi("bonus kerja", 2'000'000.00, "2025-99-99");

  keuangan.tampilin_laporan();

  return 0;
}
