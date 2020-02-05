#include<vector>
#include<deque>
#include<list>
#include<string>
#include<iostream>
#include<map>
int main()
{
  std::vector<int> vec{1,2,3,4,5,6,7};
  auto i = vec.erase(vec.begin()+1);
  std::cout<<*i<<std::endl;
  i = vec.erase(vec.end()-3, vec.end()-1);
  std::cout<<*i<<std::endl;

  std::map<int,int> map_;
  map_[1] = 2;
  map_[2] = 3;
  map_[3] = 4;
  std::map<int,int>::iterator j = map_.erase(map_.begin());
  std::cout<< j->second <<std::endl;
}