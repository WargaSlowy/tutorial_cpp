// 1. operator relasional == != < <= > >=
// 2. compare()
#include <iostream>
#include <string>

int main() {
  /**
  std::string buah1 = "apel";
  std::string buah2 = "pisang";
  std::string buah3 = "apel";

  if (buah1 == buah3) {
    std::cout << "hey buahnya namanya sama!" << std::endl;
  } else {
    std::cout << "tidak sama!" << std::endl;
  }

  if (buah1 > buah2) {
    std::cout << "buah 1 panjang katanya lebih besar" << std::endl;
  } else {
    std::cout << "tidak!, buah kedua lebih panjang kata katanya" << std::endl;
  }
  **/

  // compare() -> 0 jika string sama
  // minus ketika string pertama lebih kecil
  // plus ketika jika string pertama lebih besar

  std::string buah = "anggur";
  std::string buah2 = "anggurmangga";

  int hasil_komparasi = buah.compare(buah2);
  if (hasil_komparasi == 0) {
    std::cout << "buah dan buah2 sama teksnya" << std::endl;
  } else if (hasil_komparasi < 0) {
    std::cout << "buah katanya lebih kecil daripada buah 2" << std::endl;
  } else {
    std::cout << "buah pertama lebih besar dari buah kedua" << std::endl;
  }
  return 0;
}
