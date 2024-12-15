// .h .hpp
// guard processor #pragma once
#include <iostream>
#include "include/operasi_mtk.hpp"

int main() {
  std::cout << "perhitungan antara nilai sisi 3 adalah: " << luas_sisi(3) << std::endl;
  std::cout << "perhitungan dengan nilai 3.5 adalah: " << luas_sisi(3.5) << std::endl;
  return 0;
}
