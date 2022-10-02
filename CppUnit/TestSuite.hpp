#include <string>
using namespace std;

#ifndef TESTSUITE_H
#define TESTSUITE_H
namespace TestUnit{
  class TestCase{
      void setUp(); 

  };

  class TestCaseTest{
    void testSetUp();

  };

  class WasRun : TestCase{
    public:
  	bool wasRun; 
  	WasRun(string name);
    void setUp();
  	void testMethod();
 	void run();

  };
}
# endif

