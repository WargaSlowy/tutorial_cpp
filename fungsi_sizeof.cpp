#include <iostream>

void print_ukuran_array(int array_kita[]) {
  std::cout << "ukuran dari array di dalam fungsi adalah: "
            << sizeof(array_kita) << " bytes" << std::endl;
}

int main() { 
  int array_kita[10];
  std::cout << "ukuran array di dalam entrypoint main adalah: "<< sizeof(array_kita) << " bytes" << std::endl;
  print_ukuran_array(array_kita);
  return 0; }
