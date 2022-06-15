#include<iostream>
using namespace std;

class complex{
	int real;
	int img;
	
	public:
	complex(int r=0, int i=0){
		real = r;
		img = i;
	}
	
	complex operator+(complex x){
		complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}
	
	friend ostream & operator<<(ostream &os, complex c1);
	
};

ostream & operator<<(ostream &os, complex c1){
	os << c1.real <<"+ i"<<c1.img;
	return os;
}


int main()
{
	complex c1(3,2);
	complex c2(5,4);
	complex c3;
	c3 = c1 + c2;
	cout << c3;
	
	return 0;
}