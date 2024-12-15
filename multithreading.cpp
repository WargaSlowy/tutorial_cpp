// 1. thread utama
// 2. thread tambahan
// <thread>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

void kalkulasi_per_thread(const std::vector<int>& vec, int start, int end, int& hasil) {
  hasil = 0;
  for (int i = start; i < end; ++i) {
    hasil += vec[i];
  }
}

int main() {
  std::vector<int> vec(1000000, 1);

  int hasil1 = 0, hasil2 = 0;
  std::thread thread_pertama(kalkulasi_per_thread, std::cref(vec), 0, vec.size() / 2, std::ref(hasil1));
  std::thread thread_kedua(kalkulasi_per_thread, std::cref(vec), vec.size() / 2, vec.size(), std::ref(hasil2));

  thread_pertama.join();
  thread_kedua.join();

  int hasil_semua = hasil1 + hasil2;
  std::cout << "hasilnya adalah " << hasil_semua << std::endl;
  return 0;
}
