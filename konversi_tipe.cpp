// implicit conversion
// explicit conversion
//  C-style (type) konversi
//  C++ static_cast dynamic_cast, const_cast, reinterpret_cast
#include <iostream>



int main() {
  /**
  int nilai_integer = 42;
  double nilai_berkoma = nilai_integer;

  std::cout << "nilai integer: " << nilai_integer << std::endl;
  std::cout << "nilai koma: " << nilai_berkoma << std::endl;
  **/

  /**
  double nilai_koma = 42.75;
  int nilai_integer = (int) nilai_koma;

  std::cout << "nilai berkoma: " << nilai_koma << std::endl;
  std::cout << "nilai integer: " << nilai_integer << std::endl;
  **/

  /**
  Jarak jarak(200);
  int meter = jarak;

  jarak.jarakSekarang();
  std::cout << "jarak sekarang versi variabel: " << meter << std::endl;
  **/

  int nilai_besar = 100000;
  double nilai_kecil = static_cast<double>(nilai_besar);
  
  std::cout << "nilai_besar: " << nilai_besar << std::endl;
  std::cout << "nilai kecil: " << nilai_kecil << std::endl;

  return 0;
}
