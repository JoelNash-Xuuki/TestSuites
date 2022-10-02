#include <string>
#include "TestSuite.hpp"
#include <iostream>
#include <typeinfo>

using namespace std;
using namespace TestSuite;

WasRun::WasRun(){
  this->wasRun= NULL;
}

void WasRun::testMethod(){
  this->wasRun= true;
}

void WasRun::run(){
  this->testMethod();
}



