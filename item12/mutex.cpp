#include<mutex>
#include<vector>
#include<thread>
#include <iostream>
int main()
{
  std::vector<int> a{1,2,3,4,5};
  std::mutex mutex_;
  {
    std::lock_guard<std::mutex> lock(mutex_);
    auto i(a.begin());
    a.erase(i);
  }

}