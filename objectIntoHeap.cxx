#include<iostream>
using namespace std;

class rectangle{
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
	
	rectangle r1;    //created in stack
	rectangle *r2;
	r2 = new rectangle;     //created in heap
	
	r2 -> l = 10;
	r2 -> b = 15;
	cout << r2-> area();
	
	return 0;
	
}