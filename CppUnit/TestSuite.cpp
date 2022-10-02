#include <string>
#include "TestSuite.hpp"
#include <iostream>
#include <typeinfo>

using namespace std;
using namespace unit;

void TestCase::setUp(){

}

void WasRun::run(){
  this->setUp();
  cout << typeid(*this).name();
}

void TestCaseTest::testSetUp(){
  WasRun wr= WasRun("testMethod");
  cout << wr.wasRun << endl;
  wr.run();
  cout << wr.wasRun << endl;
}

WasRun::WasRun(string name){
	
}

void WasRun::setUp(){
  this->wasRun = false;
}

void WasRun::testMethod(){
  this->wasRun = true;
}



