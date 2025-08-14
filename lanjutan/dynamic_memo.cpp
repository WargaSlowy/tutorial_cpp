#include <iostream>

void contoh_dangling() {
  int *pointer_nilai = new int(42);
  delete pointer_nilai;

  std::cout << *pointer_nilai << std::endl;
}

void hapus_pointer() {
  int *pointer_nilai = new int(30);

  delete pointer_nilai;
  pointer_nilai = nullptr;
}

class SafeIntegerPointer {
private:
  int *pointer_nilai;

public:
  explicit SafeIntegerPointer(int value) : pointer_nilai(new int(value)) {}

  ~SafeIntegerPointer() { delete pointer_nilai; }

  int tampilin_value() const { return *pointer_nilai; }

  void setting_value(int value) { *pointer_nilai = value; }
};

int main() {
  // int *nilai_kita = new int(100);
  //
  // std::cout << "nilainya adalah: " << *nilai_kita << std::endl;
  // std::cout << "alamat memorinya adalah: " << nilai_kita << std::endl;
  //
  // delete nilai_kita;
  // nilai_kita = nullptr;

  // int ukuran = 5;
  // int* array_kita = new int[ukuran];
  //
  // for (int i = 0; i < ukuran; ++i) {
  //   array_kita[i] = i * 10;
  // }
  //
  // for (int i = 0; i < ukuran; ++i) {
  //   std::cout << "array elemen -> " << i << " adalah: " << array_kita[i] <<
  //   std::endl;
  // }
  //
  // delete[] array_kita;
  // array_kita = nullptr;

  // contoh_dangling();

  SafeIntegerPointer safePointer(2'000);
  std::cout << safePointer.tampilin_value() << std::endl;



  return 0;
}
