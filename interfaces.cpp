// = 0
// deklarasi kelas abstrak
// fungsi murni
#include <cmath>
#include <iostream>

class BangunRuang {
public:
  virtual void gambar() const = 0;
  virtual double hitungluas() const = 0;
  virtual ~BangunRuang() {}
};

class Lingkaran : public BangunRuang {
private:
  double radius;

public:
  Lingkaran(double r) : radius(r) {}

  void gambar() const override {
    std::cout << "menggambar bentuk lingkaran dengan raidus: " << radius
              << std::endl;
  }

  double hitungluas() const override { return M_PI * radius * radius; }
};

class Persegi : public BangunRuang {
private:
  double panjang, lebar;

public:
  Persegi(double p, double l) : panjang(p), lebar(l) {}

  void gambar() const override {
    std::cout << "menggambar bentuk persegi dengan ukuran antara lain"
              << std::endl;
    std::cout << "panjangnya: " << panjang << " lebarnya: " << lebar
              << std::endl;
  }

  double hitungluas() const override { return panjang * lebar; }
};

int main() {
  BangunRuang *bangunRuang[2];

  bangunRuang[0] = new Lingkaran(5.0);
  bangunRuang[1] = new Persegi(4.0, 6.0);

  for (int i = 0; i < 2; ++i) {
    bangunRuang[i]->gambar();
    std::cout << "luasnya: " << bangunRuang[i]->hitungluas() << std::endl;
  }

  for (int i = 0; i < 2; ++i) {
    delete bangunRuang[i];
  }

  return 0;
}
