#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vektor_kita = {12, 13, 14, 15, 16};

  for (auto elemennya : vektor_kita) {
    std::cout << elemennya << " ";
  }
  std::cout << std::endl;
  return 0;
}
