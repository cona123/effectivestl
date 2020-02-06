#include<iostream>
#include<vector>
#include<ctime>
int main() {
  std::clock_t start,end;
  start = std::clock();
  std::vector<int> a;
  for(long long i =0; i != 39999999; i++) {
    a.push_back(i);  
  }
  end = std::clock();
  std::cout<<"time:"<<end - start<<std::endl;

  start = std::clock();
  std::vector<int> b;
  b.reserve(39999999);
  for(long long i =0; i != 39999999; i++) {
    b.push_back(i);  
  }
  end = std::clock();
  std::cout<<"time:"<<end - start<<std::endl;
}