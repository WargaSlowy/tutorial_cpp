#include <iostream>
#include <string>

// class InfoDebug {
// public:
//   static void masuk_fungsi(const char *func = __builtin_FUNCTION()) {
//     std::cout << "masuk fungsi: " << func << std::endl;
//   }
//
//   static void keluar_fungsi(const char *func = __builtin_FUNCTION()) {
//     std::cout << "keluar dari fungsi: " << func << std::endl;
//   }
//
//   static void log_debugging(const std::string &pesan,
//                             const char *func = __builtin_FUNCTION(),
//                             const char *file = __FILE__, int line = __LINE__)
//                             {
//     std::cout << "[mode debug] " << file << ": " << "( " << func
//               << " ): " << pesan << std::endl;
//   }
// };
//
// void contoh_function() {
//   InfoDebug::masuk_fungsi();
//
//   for (int i = 0; i < 3; ++i) {
//     // std::cout << "indeks: " << i << std::endl;
//     InfoDebug::log_debugging("proses data " + std::to_string(i));
//   }
//
//   InfoDebug::keluar_fungsi();
// }

// void check_ingpo_compiler() {
// #ifdef __GNUC__
//   std::cout << "versi GCC: " << __GNUC__ << "." << __GNUC_MINOR__ << "."
//             << __GNUC_PATCHLEVEL__ << std::endl;
// #endif // __GNUC__
//
// #ifdef __clang__
//   std::cout << "versi clang: " << __clang_major__ << "." << __clang_minor__
//             << "." << __clang_patchlevel__ << std::endl;
// #endif // __clang__
//
// #ifdef __GNUG__
//   std::cout << "GNU C++ ada " << std::endl;
// #endif // __GNUG__
// }

// void check_ingpo_compiler_msc() {
// #ifdef _MSC_VER
//   std::cout << "versi microsoft c++ versi: " << _MSC_VER << std::endl;
//
// #if _MSC_VER >= 1930
//   std::cout << "visual studio versi 2022" << std::endl;
// #endif
// #endif // _MSC_VER
// }

class InfoPlatform {
public:
  static void ingpo_platform() {
    #ifdef _WIN32
    std::cout << "windows 32-bit atau 64-bit" << std::endl;
    #ifdef _WIN64
    std::cout << "windows 64 bit kedetek" << std::endl;
    #endif // def _WIN64
    #endif // _WIN32
    
    #ifdef __linux__
    std::cout << "operasi sistem linux kedetek" << std::endl;
    #endif // __linux__

    #ifdef __APPLE__
    std::cout << "platform dari apple kedetek" << std::endl;
    #ifdef __MACH__
    std::cout << "mac os kedetek" << std::endl;
    #endif // __MACH__
    #endif // __APPLE__
    
    #ifdef __unix__
    std::cout << "unix operasi sistem kedetek" << std::endl;
    #endif // __unix__

    #ifdef __ANDROID__
    std::cout << "os android kedetek" << std::endl;
    #endif // __ANDROID__
  }

  static void ingpo_arsitekur() {
    #ifdef __X86_64__
    std::cout << "x86-64 arsitektur kedetek" << std::endl;
    #elif defined(__i386__)
    std::cout << "x86 arsitektur kedetek" << std::endl;
    #elif defined (__aarch64__)
    std::cout << "ARM64 arsitektur kedetek" << std::endl;
    #elif defined(__arm__)
    std::cout << "ARM kedetek" << std::endl;
    #else
    std::cout << "platform x86-64 " << std::endl;
    #endif // __X86_64__
  }
};

int main() {

  // std::cout << "versi dari cppnya: " << __cplusplus << std::endl;
  // std::cout << "dikompile pada tangga: " << __DATE__ << std::endl;
  // std::cout << "waktu kompile: " << __TIME__ << std::endl;
  // std::cout << "nama file yang dikompile: " << __FILE__ << std::endl;

  // contoh_function();

  // check_ingpo_compiler();
  
  InfoPlatform::ingpo_platform();
  InfoPlatform::ingpo_arsitekur();

  return 0;
}
