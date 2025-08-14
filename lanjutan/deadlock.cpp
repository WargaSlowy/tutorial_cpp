// 1. mutual excalamation
// 2. hold and wait
// 3. no prepemtion
// 4. circular wait
#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mutex_1;
std::mutex mutex_2;

// void thread_pertama() {
//   std::lock_guard<std::mutex> lock_1(mutex_1);
//   std::cout << "thread pertam gass" << std::endl;
//   std::this_thread::sleep_for(std::chrono::milliseconds(100));
//
//   std::lock_guard<std::mutex> lock_2(mutex_2);
//   std::cout << "thread kedua gass" << std::endl;
// }

void thread_pertama() {
  std::lock(mutex_1, mutex_2);
  std::lock_guard<std::mutex> lock_1(mutex_1, std::adopt_lock);
  std::lock_guard<std::mutex> lock_2(mutex_2, std::adopt_lock);

  std::cout << "thread a gass" << std::endl;
}

void thread_kedua() {
  std::lock_guard<std::mutex> lock_1(mutex_1);
  std::cout << "thread kedua gass" << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(100));

  std::lock_guard<std::mutex> lock_2(mutex_2);
  std::cout << "thread pertama gass" << std::endl;
}

int main() {
  std::thread thread_1(thread_pertama);
  std::thread thread_2(thread_kedua);

  thread_1.join();
  thread_2.join();

  return 0;
}
