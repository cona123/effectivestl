#include<memory>
#include<vector>
#include<iostream>
int main()
{
  typedef std::shared_ptr<int> INTp;
  std::vector<INTp> vec; //using smart point,no lose memory
  vec.push_back(std::make_shared<int>(1));
  vec.push_back(std::make_shared<int>(2));
  vec.push_back(std::make_shared<int>(3));
  for(INTp it : vec) {
    std::cout<< *it <<std::endl;
  }
}