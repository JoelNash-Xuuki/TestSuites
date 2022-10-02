#include "TestSuite.hpp"
#include <iostream>

using namespace std;
using namespace TestSuite;

int main (int argc, char** argv){
  WasRun wr= WasRun();
  cout << wr.wasRun << endl;
  wr.run();
  cout << wr.wasRun << endl;
}
