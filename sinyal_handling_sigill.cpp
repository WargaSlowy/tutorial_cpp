// 1. kode korup
// 2. kesalahan kompilasi
// singnal() <csignal>
#include <iostream>
#include <csignal>
#include <cstdlib>

void sinyal_handler(int nilai_sinyal) {
  std::cerr << std::endl << "informasi sinyal: " << nilai_sinyal << std::endl;
  std::exit(nilai_sinyal);
}

int main() {
  std::signal(SIGILL, sinyal_handler);
  std::cout << "kita coba esekusi instruksi assembly yang illegal";
  
  asm("ud2");
  std::cout << "program tidak berjalan" << std::endl;
  return 0;
}
