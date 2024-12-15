// C++11 
//
// RAII (resource acquisition is initialization)
// std::unique_ptr -> ekslusif
// std::shared_ptr -> kepimilikan bersama
// std::weak_ptr -> referensi
//
// 1. objek  move semantics
#include <iostream>
#include <memory>

class Node {
public:
std::string nama;
std::shared_ptr<Node> next;
std::weak_ptr<Node> previous;

  Node(std::string nama) : nama(nama) {
    std::cout << "node sudah dibuat " << nama << std::endl;
  }
  ~Node() {
    std::cout << "node dari " << nama << " sudah dihancurkan" << std::endl; 
  }
};

int main() {
  std::shared_ptr<Node> node_pertama = std::make_shared<Node>("node pertama");
  std::shared_ptr<Node> node_kedua = std::make_unique<Node>("node kedua");

  node_pertama->next = node_kedua;
  node_kedua->previous = node_pertama;
  return 0;
}
