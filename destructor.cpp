// 1. nama desctructor sama dengan nama kelas ~
// 2. tidak memiliki parameter atau return type
// 3. dipanggil secara otomatis saat object itu dihancurkan
#include <iostream>
#include <string>

/**
class Orang {
public:
  std::string nama;

  Orang(std::string n) {
    nama = n;
    std::cout << "constructor parameter dipanggil" << std::endl;
  }

  ~Orang() {
    std::cout << "desctructor dipanggil" << std::endl;
  }

  void salam() {
    std::cout << "wello " << nama << std::endl;
  }
};
**/

class ArrayDinamis {
private:
  int* array;
  int ukuran;

public:
  ArrayDinamis(int u) {
    ukuran = u;
    array = new int[ukuran];
    std::cout << "array dengan ukuran " << ukuran << " dialokasikan" << std::endl;
  }

  ~ArrayDinamis() {
    delete[] array;
    std::cout << "memori dari array sudah di bebaskan" << std::endl;
  }
};

int main() {
  ArrayDinamis array_pertama(6);

  return 0;
}
