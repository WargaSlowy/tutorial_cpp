// signal() <csignal>
#include <iostream>
#include <csignal>
#include <cstdlib>


void sinyal_handler(int nilai_sinyal) {
  char inputan;
  std::cout << std::endl << "SINYAL HANDLER: " << nilai_sinyal << std::endl;
  std::cout << "apakah kamu ingin keluar program (y / n): ";
  std::cin >> inputan;
  if (inputan == 'y' || inputan == 'Y') {
    std::cout << "keluar program" << std::endl;
    std::exit(nilai_sinyal);
  } else {
    std::cout << "program tetap berjalan" << std::endl;
  }
}

int main() {
  std::signal(SIGINT, sinyal_handler);
  std::cout << "masukkan ctrl + c untuk menghentikan programnya" << std::endl;

  while (true) {}

  return 0;
}
