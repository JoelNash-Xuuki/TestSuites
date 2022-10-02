#include <string>
using namespace std;
#ifndef TESTSUITE_H
#define TESTSUITE_H
namespace TestSuite{
  class WasRun{
    private:
      void testMethod();
    public:
      WasRun();
	  void run();
      bool wasRun;
  };
};
# endif

