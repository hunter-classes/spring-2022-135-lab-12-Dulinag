#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "funcs.h"
#include <vector>


TEST_CASE("checks makeVector and its values"){

std::vector<int> c = makeVector(5);
CHECK(c[0] == 0);
CHECK(c[1] == 1);
CHECK(c[4] == 4);
}


TEST_CASE("checks goodvibes and its values"){

  std::vector<int> v{1,2,-1,3,4,-1,6};
std::vector<int> c = goodVibes(v);
CHECK(c[0] == 1);
CHECK(c[1] == 2);
CHECK(c[4] == 6);
}


TEST_CASE("checks sumPairWise and its values"){

  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
std::vector<int> c = sumPairWise(v1, v2);
CHECK(c[0] == 5);
CHECK(c[1] == 7);
CHECK(c[2] == 3);


}
