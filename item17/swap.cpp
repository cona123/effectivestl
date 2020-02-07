#include<vector>
#include<iostream>
int main() {
  std::vector<int> a;
  a.reserve(100);
  std::cout<< "a cap is " << a.capacity() << std::endl;
  std::vector<int>(a).swap(a);
  std::cout<< "a cap is " << a.capacity() << std::endl;
}