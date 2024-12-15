#include <iostream>

class Complex {
private:
  double real;
  double imag;

public:
  Complex(double r = 0, double i = 0) : real(r), imag(i) {}

  Complex operator+(const Complex &nilai) {
    return Complex(real + nilai.real, imag + nilai.imag);
  }

  void tampilkan() const {
    std::cout << real << " + " << imag << "i" << std::endl;
  }
};

int main() {
  Complex bilangan_complex1(3.0, 4.0);
  Complex bilangan_complex2(1.5, 2.5);

  Complex hasil = bilangan_complex1 + bilangan_complex2;

  std::cout << "nilai complex pertama adalah: ";
  bilangan_complex1.tampilkan();
  std::cout << "nilai complex kedua adalah: ";
  bilangan_complex2.tampilkan();
  std::cout << "nilai complex1 + nilai complex2 adalah: ";
  hasil.tampilkan();

  return 0;
}
