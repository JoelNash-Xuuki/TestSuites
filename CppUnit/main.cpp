#include "TestSuite.hpp"
#include <iostream>

using namespace std;
using namespace unit;

int main (int argc, char** argv){
  WasRun wr= WasRun("testMethod");
  wr.run();
  cout << wr.wasRun << endl;
}
