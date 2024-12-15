// 1. statis
// 2. dinamis
//
// class Dasar {
//  public:
//    virtual void fungsi() {
//        ...
//    }
// }
//
// class turunan : public dasar {
//  public:
//    void display() override {
//        ...
//    }
// }
#include <iostream>

class OperasiMatematika {
public:
  int add(int a, int b) { return a + b; }

  double add(double a, double b) { return a + b; }
};

int main() {
  OperasiMatematika op_matmatika;

  int a = 20, b = 30;
  double a_desimal = 20.3, b_desimal = 15.5;
  std::cout << "penjumlahan bilangan bulat dari " << a << " dan " << b
            << std::endl;
  std::cout << "hasilnya adalah: " << op_matmatika.add(a, b);

  std::cout << "penjumlahan bilangan desimal dari " << a_desimal << " dan "
            << b_desimal << std::endl;

  std::cout << "hasilnya adalah: " << op_matmatika.add(a_desimal, b_desimal);

  return 0;
}
