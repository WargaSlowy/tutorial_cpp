// <ctime> <chrono>
//
// time_t: 1 januari (1970)
// std::time() time_t
// std::localtime()
// std::ascitime()
// std::strftime()
// std::chrono::system_clock
// std::chrono::duration
// std::chrono::time_point
#include <iostream>
#include <ctime>
#include <chrono>


int main() {
  std::chrono::system_clock::time_point sekarang = std::chrono::system_clock::now();

  time_t waktuSekarang = std::chrono::system_clock::to_time_t(sekarang);
  std::cout << "waktu sekarang adalah:" << std::ctime(&waktuSekarang);

  return 0;
}
