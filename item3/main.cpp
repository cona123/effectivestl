#include<iostream>
#include <vector>
class A {
 public:
  virtual void geta() {
      std::cout<< "A geta"<<std::endl;
  }
  private:
    std::string a;
};

class B : public A {
 public:
  virtual void geta() {
      std::cout<< "B geta"<<std::endl;
      std::cout<< "B getb"<<std::endl;
  }
  private:
    std::string a;
    std::string b;
};

int main() {
  std::vector<A> vec1;
  std::vector<A*> vec2;
  B b;
  vec1.push_back(b); // wrong , b is a
  B *b1 = new B;
  vec2.push_back(b1);
  A it = vec1[0];
  it.geta();
  A *it1 = vec2[0];
  it1->geta();
}