// 1. static member functio hanya terkait dengan kelas itu sendiri
// 2. fungsi ini tidak memliki akses ke anggota data non static
// 3. static member function hanya mengakses data atau fungsi anggota yang juga di deklarasikan dengan metode `static`
//
// 1. dapat dipanggil tanap membuat objek
// 2. tidak menggunakan pointer this
// 3. hanya akses anggota static
#include <iostream>

class HitungObjek {
private:
  static int hitung_objek;
  
public:
  HitungObjek() {
    ++hitung_objek;
  }

  ~HitungObjek() {
    --hitung_objek;
  }

  static int berikanHitungObjek() {
    return hitung_objek;
  }
};

int HitungObjek::hitung_objek = 0;

int main() {
  std::cout << "jumlah objek saat ini: " << HitungObjek::berikanHitungObjek() << std::endl;

  HitungObjek objek_pertama, objek_kedua;
  std::cout << "jumlah objek stelah dibuat adalah: " << HitungObjek::berikanHitungObjek() << std::endl;
  {
    HitungObjek objek_ketiga;
    std::cout << "jumlah objek setelah dibuat adalah: " << HitungObjek::berikanHitungObjek() << std::endl;
  }
  std::cout << "jumlah objek sekarang adalah: " << HitungObjek::berikanHitungObjek() << std::endl;
  return 0;
}
