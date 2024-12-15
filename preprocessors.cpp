// #include -> menyertakan file header
// #define -> mendifinisikan makro
// #undef -> menghapus definisi makro
// #ifdef, #ifndef, #if, #else, #elif, #endif
// #pragma
// #error #warning
#include <iostream>

#define VERSIAPLIKASI 2

#ifndef VERSIAPLIKASI 
#error "VERSIAPLIKASI tidak didefinisikan"
#endif



int main() {
  std::cout << "program berjalan" << std::endl;
  return 0;
}
