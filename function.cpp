// 1. pengorganisasian kode
// 2. pemeliharaan kode
// 3. penggunaan ulang kode

// 1. deklarasi fungsi (function declaration)
// 2. definisi fungsi
// 3. pemanggilan

// tipe_return nama_fungsi(isi_parameter) {
//    ... blok kode
//    return value;
// }

#include <iostream>
#include <string>
void tampilkanNama(std::string nama = "tidak ada nama") {
  std::cout << nama << std::endl;
}

int main() {
  tampilkanNama();
  tampilkanNama("arfy");
  return 0;
}
