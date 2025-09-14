#include <iostream>
#include <string>

// banyak bentuk
// virtual function

class PerangkatElektronik {
public:
  virtual void nyalakan() {
    std::cout << "perangkat elektronik umum dinyalakan" << std::endl;
  }

  virtual ~PerangkatElektronik() {
    std::cout << "perangkat elektronik umu dimatikan" << std::endl;
  }
};

class Televisi : public PerangkatElektronik {
public:
  Televisi(std::string merek, int ukuran) {
    merek_tv = merek;
    ukuran_layar = ukuran;
    std::cout << "televisi dengan merek " << merek_tv
              << "ukuran layar: " << ukuran_layar << "inch siap dipakai"
              << std::endl;
  }

  void nyalakan() override {
    std::cout << "perangkat tv " << merek_tv << " dinyalakan" << std::endl;
  }

  ~Televisi() {
    std::cout << "televisi " << merek_tv << " sudah dimatikan" << std::endl;
  }

private:
  std::string merek_tv;
  int ukuran_layar;
};

int main() {

  PerangkatElektronik* perangkat_pertama = new Televisi("sumsang", 700);

  perangkat_pertama->nyalakan();

  delete perangkat_pertama;

  return 0;
}
