
#include "funcs.h"
#include <vector>
#include <iostream>
#include <vector>




int main(){

  std::cout<<"Task A: " << std::endl;
  std::cout<<std::endl;
  makeVector(5);
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::vector<int> v{1,2,-1,3,4,-1,6};
  std::cout<<"Task B: " << std::endl;
  std::cout<<std::endl;
  goodVibes(v);
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  std::cout<<"Task C: " << std::endl;
  std::cout<<std::endl;
  gogeta(v1, v2);
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};
  std::cout<<"Task D: " << std::endl;
  std::cout<<std::endl;
  sumPairWise(v3, v4); // returns [5, 7, 3]
  std::cout<<std::endl;


}
