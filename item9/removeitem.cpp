#include<vector>
#include<list>
#include<iostream>
#include<map>
#include<algorithm>
int main()
{
  std::vector<int> a{1,2,3,4,5};
  a.erase(std::remove(a.begin(), a.end(), 3),a.end());
  for(auto i: a) {
    std::cout<<" "<<i<<std::endl;
  }

  std::cout<<std::endl;
  std::list<int> b{1,2,3,4,5};
  b.remove(4);
  for(auto i: b) {
    std::cout<<" "<<i<<std::endl;
  }

  std::cout<<std::endl;

  std::map<int, int> c;
  c[1] = 1;
  c[2] = 2;
  c[3] = 3;
  c[4] = 4;
  c[5] = 5;
  c.erase(3);
  for(std::map<int,int>::iterator i = c.begin();i != c.end();i++) {
      std::cout<< i->first<<" "<<i->second<<std::endl;
  }
}