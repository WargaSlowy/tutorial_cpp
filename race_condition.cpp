//1 .beberapa
#include <iostream>
#include <thread>
#include <mutex>

int hitung = 0;
std::mutex mtx;

void kalkulasi_hitung(int iterasi) {
  for (int i = 0; i < iterasi; ++i) {
    std::lock_guard<std::mutex> lock(mtx);
    ++hitung;
  }
}

int main() {
  std::thread thread_pertama(kalkulasi_hitung, 1000000);
  std::thread thread_kedua(kalkulasi_hitung, 1000000);

  thread_pertama.join();
  thread_kedua.join();

  std::cout << "hasil akhirnya adalah: " << hitung << std::endl;
  return 0;
}
