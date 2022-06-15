#include<iostream>
using namespace std;

class test{
	private: int a;
	protected : int b;
	public : int c;
	
	friend void fun();
};

void fun(){
	test t;
	t.a = 100;   // ✓
	t.b = 200;   // ✓
	t.c = 300;   // ✓
	
	cout << t.a << "  "<< t.b << "  "<< t.c <<  endl;
}

// ----------------------------------------------------------
class you;

class me{
	private: int a;
	protected : int b;
	public : int c;
    
    friend you;
};

class you{
	me m;
	public:	
	void fun(){
	
		m.a = 10;   // ✓
		m.b = 20;   // ✓
		m.c = 30;   // ✓
	}
	

	void show(){
		cout <<m.a << "  " << m.b << "  "<< m.c << endl;
	}
};
	
int main()
{
	you y;
	y.fun();
	y.show();
	fun();
	

}