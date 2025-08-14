// 1. random number engine
// 2. randmo number distribution
// 3. seeding
// std::mt19937
#include <chrono>
#include <random>
#include <iostream>

int main() {

  std::random_device rd;
  std::mt19937 generate_angka(rd());

  // std::mt19937_64 generator;
  //
  // for (int iterasi = 0; iterasi < 5; ++iterasi) {
  //   std::cout << "random number: " << iterasi + 1 << " sama dengan -> " << generator() << std::endl;
  // }

  // std::random_device random_d;
  //
  // std::cout << "hasil generatenya adalah: " << std::endl;
  // for (int iterasi = 0; iterasi < 5; ++iterasi) {
  //   std::cout << "true randomnya " << iterasi + 1 << " = " << random_d() << std::endl;
  // }

  // std::mt19937 generator(42);
  //
  // for (int i = 0; i < 5; ++i) {
  //   std::cout << generator() << std::endl;
  // }
  //
  // unsigned seeding = static_cast<unsigned>(std::chrono::high_resolution_clock::now().time_since_epoch().count());
  // std::mt19937 generator_angka(seeding);
  //
  // for (int i = 0; i < 5; ++i) {
  //   std::cout << "hasil: " << generator_angka() << std::endl;
  // }

  // std::random_device rd;
  // std::mt19937 generator_angka(rd());
  //
  // for (int i = 0; i < 5; ++i) {
  //   std::cout << "hasilnya: " << generator_angka() << std::endl;
  // }

  // std::random_device rd;
  // std::mt19937 generate_angka(rd());
  //
  // std::uniform_int_distribution<int> distribusi(1, 100);
  //
  // for (int i = 0; i < 10; ++i) {
  //   std::cout << distribusi(generate_angka) << std::endl;
  // }

  // std::random_device rd;
  // std::mt19937 generate_angka(rd());
  //
  // std::uniform_real_distribution<double> distribusi(0.0, 1.0);
  //
  // for (int i = 0; i < 10; ++i) {
  //   std::cout << distribusi(generate_angka) << std::endl;
  // }

  // std::random_device rd;
  // std::mt19937 generate_angka(rd());
  //
  // std::normal_distribution<double> distribusi(0.0, 1.0);
  //
  // for (int i = 0; i < 10; ++i) {
  //   std::cout << distribusi(generate_angka) << std::endl;
  // }
  
  // std::random_device rd;
  // std::mt19937 generate_angka(rd());
  //
  // std::bernoulli_distribution distribusi(0.3);
  //
  // int nilai_asli = 0;
  // for (int i = 0; i < 100; ++i) {
  //   if (distribusi(generate_angka)) {
  //     nilai_asli++;
  //   }
  // }
  //
  // std::cout << "hasil aslinya adalah: " << nilai_asli << " dari rentang angka 100" << std::endl;
  
  std::exponential_distribution<double> distribusi(1.0);
  for (int i = 0; i < 10; ++i) {
    std::cout << distribusi(generate_angka) << std::endl;
  }
  
  return 0;
}
