#include <string>
#include "WasRun.hpp"
using namespace std;

WasRun::WasRun(string name){
	this->wasRun = false;
}

void WasRun::testMethod(){
  this->wasRun = true;
}

