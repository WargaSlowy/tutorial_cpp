// 1. throwing expcetion (throw)
// 2. catch
// 3. try
// stdexcept std::out_of_range std::invalid_argument std::runtime_error
//
// try {
//    throw expcetion;
// } catch (tipe_exception variabel) {
//    ..
// }

#include <filesystem>
#include <iostream>
#include <string>
#include <stdexcept>

class KostumException : public std::exception {
private:
  std::string pesan;

public:
  explicit KostumException(const std::string pesan) : pesan(pesan) {}

  const char* what() const noexcept override {
    return pesan.c_str();
  }
};

class Kalkulator {
public:
  double pembagian(double angka1, double angka2) {
    if (angka2 == 0) {
      throw std::invalid_argument("Error: tidak dibagikan dengan nol!");
    }
    return angka1 / angka2;
  }
};

int main() {
  Kalkulator kalkulator;
  double angka1, angka2;

  std::cout << "masukkan angka: ";
  std::cin >> angka1;
  std::cout << "masukkan angka kedua: ";
  std::cin >> angka2;

  try {
    double hasil = kalkulator.pembagian(angka1, angka2);
    std::cout << "hasilnya adalah " << hasil << std::endl;
  } catch (const std::invalid_argument &pesan_error) {
    std::cout << pesan_error.what() << std::endl;
  }

  std::cout << "hasil kalkulasi berhasil!" << std::endl;
  return 0;
}
