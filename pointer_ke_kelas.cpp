// 1. dynamic memory allocation
// 2. efiesiensi
// 3. polimorfisme
// nama_kelas *namapointer; ->
#include <iostream>
#include <string>

class Manusia {
public:
  virtual void bicara() { std::cout << "hola" << std::endl; }
};

class Orang : public Manusia {
public:
  void bicara() override { std::cout << "keren rek" << std::endl; }
};

int main() {

  Manusia *manusia_pointer;
  Orang orang;

  manusia_pointer = &orang;
  manusia_pointer->bicara();

  return 0;
}
