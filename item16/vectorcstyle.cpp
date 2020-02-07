#include<iostream>
#include<vector>
void dosomething(const int* pInts,size_t numInt) {
  std::cout<< "dosomething start" <<std::endl;
  for(int i = 0; i != numInt; i++) {
    std::cout<< pInts[i] << " ";
  }
  std::cout<<std::endl;
  std::cout<< "dosomething over" <<std::endl;
}

size_t fillarray(int* pArray, size_t arraysize) {
  std::cout<< "fillarray start" <<std::endl;
  for(int i = 0; i != 20; i++) {
    pArray[i]  = i;
  }
  std::cout<<std::endl;
  std::cout<< "fillarray over" <<std::endl;  
  return 20;
}
int main() {
  std::vector<int> a{1,2,3,4,5};
  dosomething(&a[0],a.size());
  std::vector<int> b(100,1);
  std::cout<<"b size is "<<b.size()<<std::endl;
  b.resize(fillarray(&b[0],b.size()));
  std::cout<<"b size is "<<b.size()<<std::endl;
  for(auto i:b) {
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
  std::cout<<"b size is "<<b.size();
}