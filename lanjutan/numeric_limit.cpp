
#include <cmath>
#include <iostream>
#include <limits>
#include <linux/limits.h>
#include <type_traits>

// bool kalkulasi_tambah(int a, int b, int& hasil) {
//   if (b > 0 && a > std::numeric_limits<int>::max() - b) {
//     return false;
//   }
//
//   if (b < 0 && a < std::numeric_limits<int>::min() - b) {
//     return false;
//   }
//
//   hasil = a + b;
//   return true;
// }

template <typename T> T cari_maks(const T *array, std::size_t size) {
  static_assert(std::is_arithmetic<T>::value,
                "T ini harus tipe datanya aritmatika");

  if (size == 0) {
    return std::numeric_limits<T>::lowest();
  }

  T max_value = array[0];
  for (std::size_t i = 1; i < size; ++i) {
    if (array[i] > max_value) {
      max_value = array[i];
    }
  }
  return max_value;
}

template <typename T> bool cek_range(T value) {
  static_assert(std::is_arithmetic<T>::value,
                "T ini harus tipe datanya aritmatika");

  if constexpr (std::is_integral<T>::value) {
    return value >= std::numeric_limits<T>::min() &&
           value <= std::numeric_limits<T>::max();
  } else {
    return !std::isnan(value) && value >= std::numeric_limits<T>::lowest() &&
           value <= std::numeric_limits<T>::max();
  }
}

int main() {
  // std::cout << "int nilai minimal: " << std::numeric_limits<int>::min() <<
  // std::endl; std::cout << "int nilai maksnya adalah: " <<
  // std::numeric_limits<int>::max() << std::endl;
  //
  // std::cout << "int bitsnya: " << std::numeric_limits<int>::digits <<
  // std::endl; std::cout << "int ini signed: " <<
  // std::numeric_limits<int>::is_signed << std::endl; std::cout << "apakah int
  // itu integer: " << std::numeric_limits<int>::is_integer << std::endl;

  // std::cout << "nilai float minimal: " << std::numeric_limits<float>::min()
  // << std::endl; std::cout << "nilai float maksimalnya adalah: " <<
  // std::numeric_limits<float>::max() << std::endl; std::cout << "nilai epsilon
  // dari floatnya: " << std::numeric_limits<float>::epsilon() << std::endl;

  // int a = 1'000'000;
  // int b = 500'000;
  // int hasil;
  //
  // if (kalkulasi_tambah(a, b, hasil)) {
  //   std::cout << "hasilnya adalah: " << hasil << std::endl;
  // } else {
  //   std::cout << "ada masalah dari overflow angka" << std::endl;
  // }

  // int integer_array[] = {1, 5, 3, 9, 2, 3};
  // std::cout << "max integernya: " << cari_maks(integer_array, 6) << std::endl;
  // std::cout << "integer maksnya adalah: " << std::numeric_limits<int>::max() << std::endl;

  float floating_array[] = {1.5f, 5.2f, 3.3f, 9.1f};
  std::cout << "maks dari floatingnya adalah: " << cari_maks(floating_array, 4) << std::endl;

  return 0;
}
