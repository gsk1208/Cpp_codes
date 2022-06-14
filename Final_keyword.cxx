#include<iostream>
using namespace std;
class parent //final{       // -> unInheritable
// if inherited....
{
	public:
	virtual void fun() final   // -> non-overridable
	{
		cout << " void fun - Parent" ;
	}
};

class child : public parent{
	public:
	void fun(){
		cout<< "void fun - child";
	}
};

int main()
{
	child c;
	c.fun();
	
	return 0;
}