#include<iostream>
using namespace std;

class rect{
	public:
	int l;
	int b;
	int area(){
		return l*b;
	}
	int perimeter(){
		return 2*(l+b);
	}
};

int main()
{
	rect r1;
	r1.l = 10;
	r1.b = 8;
	cout << r1.area()<< endl;
	
	rect r2;
	r2.l = 20;
	r2.b = 34;
	cout << r2.perimeter() ;
	
	return 0;
}