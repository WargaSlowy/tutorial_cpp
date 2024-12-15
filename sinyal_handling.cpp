// SIGINT ctrl + c
// SIGTERM
// SIGSEGV
// SIGABRT -> abort()
// SIGFPE
// csignal <- C++ signal.h
#include <csignal>
#include <cstdlib> // exit()
#include <iostream>

void sinyal_handler(int angka_sinyal) {
  std::cout << "sinyal interrupt " << angka_sinyal << " diterima" << std::endl;
  std::exit(angka_sinyal);
}

int main() {
  std::signal(SIGFPE, sinyal_handler);
  int a = 10, b = 0;
  std::cout << "kita akan coba bagikan angka 10 dan 0" << std::endl;
  // 
  int hasil = a / b;

  std::cout << hasil << std::endl;
  return 0;
}
