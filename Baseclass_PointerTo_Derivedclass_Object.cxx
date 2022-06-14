#include<iostream>
using namespace std;

class base{
	public:
	void fun1();
	void fun2();
	void fun3();
};

class derived : public base{
	public :
	void fun4();
	void fun5();
};

int main()
{
	base *p;
	p = new derived();
	
	p -> fun1();      // ✓
	p -> fun2();      // ✓    // base pointer -> base
	p -> fun3();      // ✓
	
	p -> fun4();      // × 
	p -> fun5();      // ×    // not possible (2 errors)
	
	// only object formation in derived class is possible.
	// The reverse is also not possible
	
	return 0;
}
