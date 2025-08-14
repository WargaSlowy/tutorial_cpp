// 1. thread
// 2. race condition
// 3. critical section
// 4. mutal exclusion
#include <chrono>
#include <functional>
#include <iostream>
#include <thread>

// void fungsi_task(int id) {
//   for (int i = 0; i < 5; ++i) {
//     std::cout << "task " << id << " iterasi ke: " << i << std::endl;
//     std::this_thread::sleep_for(std::chrono::milliseconds(100));
//   }
// }

void fungsi_biasa() { std::cout << "wello apa kabar" << std::endl; }

class KelasDipanggil {
public:
  void operator()() {
    std::cout << "fungsi object di esekusi di dalam thread" << std::endl;
  }
};

int main() {
  // std::thread thread_1(fungsi_task, 1);
  // std::thread thread_2(fungsi_task, 2);
  //
  // thread_1.join();
  // thread_2.join();
  //

  std::thread thread_1(fungsi_biasa);
  KelasDipanggil kelas_object;
  std::thread thread_2(kelas_object);

  std::thread thread_3(
      []() { std::cout << "fungsi lambda dijalankan dalam thread" << std::endl; });

  std::thread thread_4(std::bind(fungsi_biasa));

  std::cout << "sudah kelar " << std::endl;

  thread_1.join();
  thread_2.join();
  thread_3.join();
  thread_4.join();
  return 0;
}
