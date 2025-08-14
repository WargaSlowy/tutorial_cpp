// clock(), time, gettimeofday
#include <chrono>
#include <ctime>
#include <iostream>
#include <ratio>

int main() {
  // auto waktu = std::chrono::system_clock::now();
  //
  // std::time_t time_t_sekarang = std::chrono::system_clock::to_time_t(waktu);
  // std::cout << "waktu saat sekarang ini adalah: " <<
  // std::ctime(&time_t_sekarang);
  //
  // auto start = std::chrono::steady_clock::now();
  //
  // for (int i = 0; i < 1'000; ++i) {
  //   std::cout << "nilai ke: " << i << std::endl;
  // }
  //
  // auto end = std::chrono::steady_clock::now();
  //
  // auto durasi = std::chrono::duration_cast<std::chrono::microseconds>(end -
  // start); std::cout << "waktu esekusi adalah: " << durasi.count() << "
  // mikrosekon" << std::endl;

  // auto start = std::chrono::high_resolution_clock::now();
  //
  // int hitung = 0;
  // for (int iterasi = 0; iterasi < 1'000; ++iterasi) {
  //   hitung += iterasi + 2;
  // }
  //
  // auto end = std::chrono::high_resolution_clock::now();
  //
  // auto nanosekon =
  //     std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  // auto milisekon =
  //     std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  // std::cout << "waktu esekusi adalah: " << milisekon.count() << " ms"
  //           << std::endl;
  // std::cout << "waktu esekusi adalah: " << nanosekon.count() << " nano sekon"
  //           << std::endl;
  //
  // std::chrono::milliseconds milisekon(1'000);
  // std::chrono::seconds detik(1);
  // std::chrono::hours jam(1);
  // std::cout << "1 detik sama dengan: " << std::chrono::duration_cast<std::chrono::milliseconds>(detik).count() << std::endl;
  // std::cout << "1 jam = " << std::chrono::duration_cast<std::chrono::minutes>(jam).count() << " menit" << std::endl;

  using frame_rate = std::ratio<1, 60>;
  using durasi_frame = std::chrono::duration<int, frame_rate>;

  durasi_frame frame_30(30);
  auto detik = std::chrono::duration_cast<std::chrono::seconds>(frame_30);
  auto milidetik = std::chrono::duration_cast<std::chrono::milliseconds>(frame_30);

  std::cout << "30 frame sama dengan: " << detik.count() << " detik" << std::endl;
  std::cout << "30 frame sama dengan: " << milidetik.count() << " milidetik" << std::endl;

  return 0;
}
