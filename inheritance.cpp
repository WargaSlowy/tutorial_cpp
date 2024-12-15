// 1. base class 
// 2. derived class
// 3. akses modifikasi dalam pewarisan
//    - public inheritance
//    - protected inheritance
//    - private inheritance
// 4. overrding dan polimorfisme
#include <iostream>
#include <string>

class Hewan {
  protected:
  std::string nama;
  int umur;

public:
  Hewan(std::string n, int u) : nama(n), umur(u) {}

  void informasi() {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "umur: " << umur << std::endl;
  }

  virtual void suara() {
    std::cout << "hewan bersuara " << std::endl;
  }
};

class Kucing : public Hewan {
public:
  Kucing(std::string n, int u) : Hewan(n, u) {}

  void suara() override {
    std::cout << nama << " berkata: miaaaaw" << std::endl;
  }
};

int main() {
  Kucing kucing("james", 5);

  Hewan* hewan_pointer;
  hewan_pointer = &kucing;
  hewan_pointer->informasi();
  hewan_pointer->suara();

  return 0;
}
