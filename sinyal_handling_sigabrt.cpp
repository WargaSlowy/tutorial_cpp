// abort() <cstdlib>
// abort()
// core dump
#include <iostream>
#include <cassert>


int main() {
  int x = 5;

  std::cout << "check assert " << std::endl;
  assert(x == 10);
  std::cout << "apakah dijalankan" << std::endl;
  return 0;
}
