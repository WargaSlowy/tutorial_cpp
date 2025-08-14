// std::endl flush buffer, \n hanya menambahkan karakter newline
//
#include <chrono>
#include <fstream>
#include <iostream>
#include <streambuf>

void test_data() {
  const int iterasi = 1'000'000;

  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < iterasi; ++i) {
    std::cout << "test line " << i << "\n";
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto durasi = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "\nWaktu dengan newline (\\n): " << durasi.count() << " milisekon\n";

  start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < iterasi; ++i) {
    std::cout << "test line " << i << std::endl;
  }
  end = std::chrono::high_resolution_clock::now();
  auto durasi_endl = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

  std::cout << "waktu dengan std::endl adalah: " << durasi_endl.count() << " milisekon\n";
  std::cout << "perbedaan: " << (durasi_endl.count() - durasi.count()) << " milisekon\n";
}

int main() {
  // std::cout << "wello" << std::endl;
  // std::cout << " arfy slowy" << std::endl;
  // std::cout << "!%&*" << std::endl;

  std::ofstream file("output.txt");
  std::streambuf *orig = std::cout.rdbuf();
  std::cout.rdbuf(file.rdbuf());

  test_data();

  std::cout.rdbuf(orig);

  return 0;
}
