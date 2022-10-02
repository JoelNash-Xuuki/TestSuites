package JavaUnit; 
import java.lang.reflect.Method;

class TestSuite {

  public static void main(String[] args) throws Exception{
	System.out.println("Running test suite...");
	WasRun test= new WasRun("testMethod");
    assert (test.wasRun == false) : "bad before run";
	test.run();
	assert (test.wasRun == true) : "bad after run";
  }
}

class TestCase{
  protected String name;
  protected boolean wasRun;

  TestCase(String name){
    this.name= name;
  }

  public void run() throws Exception{
    Method method = WasRun.class.getMethod(this.name);
    method.invoke(this);
  }
}

//class TestCaseTest extends TestCase{
//  TestCaseTest(String name){
//    super(name);
//  }
//  public void testRunning(){
//    WasRun test= new WasRun("testMethod");
//    assert (test.wasRun == false) : "bad before run";
//	try{
//	  super.run();
//    } catch(Exception e){
//	  System.out.println("Bad run");
//	}	
//	assert (test.wasRun == true) : "bad run";
//  }
//}

class WasRun extends TestCase {

  WasRun(String name){
	super(name);
    super.wasRun= false;
  }

  public void testMethod(){
    this.wasRun= true;
  }
}



