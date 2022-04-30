
#include "funcs.h"

#include <iostream>
#include <vector>




int main(){


  makeVector(5);
  std::cout<<std::endl;
  std::vector<int> v{1,2,-1,3,4,-1,6};
  goodVibes(v);
  std::cout<<std::endl;
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  gogeta(v1, v2);
  std::cout<<std::endl;
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};

  sumPairWise(v3, v4); // returns [5, 7, 3]
  std::cout<<std::endl;


}
