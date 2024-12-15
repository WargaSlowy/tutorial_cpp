// namespace
// namespace operasiMatematika {
//  ...
// }
#include <iostream>
#include <ostream>
#include <string>

namespace Perusahaan {
namespace HumanResource {
void informasi_karyawan() {
  std::cout << "ini adalah informasi karyawan dari namespace HumanResource"
            << std::endl;
}
} // namespace HumanResource
namespace Programmer {
void informasi_project() {
  std::cout << "ini adalah informasi project dari namespace Programmer";
}
} // namespace Programmer
} // namespace Perusahaan

int main() { 
  Perusahaan::HumanResource::informasi_karyawan();
  Perusahaan::Programmer::informasi_project();
  return 0; 
}
