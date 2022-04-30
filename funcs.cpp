
#include "funcs.h"

#include <iostream>
#include <vector>
using namespace std;


std::vector<int> makeVector(int n){

int i;
std::vector<int> v;

for (i = 0; i <= n-1; i++){

  std::cout << i;
  v.push_back(i);

    }

return v;
}

std::vector<int> goodVibes(const std::vector<int> v){

  int i;
  std::vector<int> c;

for (int i : v) {

  if (i >= 0){

    cout << i;
    c.push_back(i);
  }
}
return c;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){

  for (const auto& v : {std::move(goku), std::move(vegeta)}) {
      for (auto value : v) {
          std::cout << value << ' ';
      }
  }


}


std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  int d;
    std::vector<int> c;

  for (int i=0;i<v1.size();i++)
  {

    d = v1[i] + v2[i];
    std::cout << d;
      c.push_back(d);






}
return c;
}
