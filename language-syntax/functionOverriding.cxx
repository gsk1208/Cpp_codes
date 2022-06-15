#include<iostream>
using namespace std;

class base{
	public:
	void fun(){
		cout << "function of base class\n";
	}
};

class derived : public base{
	public:
	void fun(){
		cout << "function of derived class\n";
	}
};

int main()
{
	base *p = new derived();
	p -> fun();
	
	derived d;
	base *ptr = &d;
	p -> fun();
	
	derived D;
	D.fun();    // function overriding
	
	return 0;
		
}