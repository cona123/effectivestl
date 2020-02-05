#include<list>
#include<iostream>
#include <fstream>
#include <iterator>
int main()
{
  std::ifstream datafile("ints.dat");
  std::list<int> data((std::istream_iterator<int>(datafile)),
                      std::istream_iterator<int>());
  for(auto i : data) {
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}