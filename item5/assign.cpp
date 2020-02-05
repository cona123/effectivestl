#include<vector>
#include<deque>
#include<list>
#include<string>
#include<iostream>
int main()
{
  std::vector<int> vec;
  vec.assign(7,1);
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  vec.assign({1,2,3});
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> vec2{2,2};
  vec.assign(vec2.begin(), vec2.end());
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;

  std::deque<int> deq;
  deq.assign(7,1);
  for(auto s : deq) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  deq.assign({1,2,3});
  for(auto s : deq) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  std::deque<int> deq2{2,2};
  deq.assign(deq2.begin(), deq2.end());
  for(auto s : deq) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;

  std::list<int> lis;
  lis.assign(7,1);
  for(auto s : lis) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  lis.assign({1,2,3});
  for(auto s : lis) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  std::list<int> lis2{2,2};
  lis.assign(lis2.begin(), lis2.end());
  for(auto s : lis) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
}