#include <iostream>
#include <string>

class PerangkatBisaDicas {
public:
  virtual void ngecas() = 0;
  virtual int status_baterai() = 0;
  virtual std::string dapatkan_nama_perangkat() = 0;

  virtual ~PerangkatBisaDicas() {
    std::cout << "PerangkatBisaDicas telah di putus" << std::endl;
  }
};

class Android : public PerangkatBisaDicas {
public:
  Android(std::string merek, int baterai_awal) {
    merek_hp = merek;
    presentasi_baterai = baterai_awal;
  }

  void ngecas() override {
    if (presentasi_baterai < 100) {
      presentasi_baterai += 3;

      if (presentasi_baterai > 100) {
        presentasi_baterai = 100;
      }
      std::cout << merek_hp << " sedang ngecas dengan baterai "
                << presentasi_baterai << " %" << std::endl;
    } else {
      std::cout << merek_hp << " baterainya sudah penuh" << std::endl;
    }
  }

  int status_baterai() override { return presentasi_baterai; }

  std::string dapatkan_nama_perangkat() override {
    return "smartphone android " + merek_hp;
  }

  ~Android() { std::cout << merek_hp << " dimatikan sistemnya" << std::endl; }

private:
  std::string merek_hp;
  int presentasi_baterai;
};

void proses_isi_baterai(PerangkatBisaDicas *perangkat) {
  std::cout << "mengisi daya: " << perangkat->dapatkan_nama_perangkat()
            << " baterai: " << perangkat->status_baterai() << " %" << std::endl;

  while (perangkat->status_baterai() < 100) {
    perangkat->ngecas();
  }

  std::cout << "pengisian daya baterai kelar" << std::endl;
}

int main() {
  PerangkatBisaDicas *hp_kita = new Android("WSlowy", 55);

  proses_isi_baterai(hp_kita);

  return 0;
}
