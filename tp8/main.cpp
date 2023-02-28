#include "ZZ.hpp"
#include <vector>
#include <list>

int main(int, char **) {
  std::list<ZZ *> ZZs;
  ZZs.push_back(new ZZ{"Buon", "Oscar", 20});
  ZZs.push_back(new ZZ{"Galpin", "Thomas", 10});
  for (ZZ * e : ZZs)
  {
    delete e;
  }
  
  return 0;
}

