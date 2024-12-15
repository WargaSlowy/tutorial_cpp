// enum NamaEnum {
//  nilai_konstan1
// };
#include <iostream>

enum Lampu {
  Off,
  On,
};

void printLampu(Lampu lampu) {
  if (lampu == On) {
    std::cout << "lampunya hidup" << std::endl;
  } else {
    std::cout << "lampunya mati" << std::endl;
  }
}

int main() {
  Lampu lampuSaya = On;
  printLampu(lampuSaya);
    return 0;
}
