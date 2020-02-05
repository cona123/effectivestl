#include<vector>
#include<deque>
#include<list>
#include<string>
#include<iostream>
int main()
{
  std::vector<int> vec;
  vec.assign(7,1);
  vec.insert(vec.begin(),5);
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  vec.insert(vec.begin(),5,20);
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  vec.insert(vec.begin(),{5,21});
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> vec2{1,2,3};
  vec.insert(vec.begin(),vec2.begin(),vec2.begin()+1);
  for(auto s : vec) {
    std::cout<< s<<" ";
  }
  std::cout<<std::endl;

}