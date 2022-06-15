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
	
	friend complex operator+(complex c1, complex c2);
	
	void display(){
		cout << real << " + i"<<img;
	}
};

// using friend keyword to write outside the class
complex operator+(complex c1, complex c2)
	{
		complex temp;
		temp.real = c1.real+c2.real;
		temp.img = c1.img+c2.img;
	    return temp;
	}
		

int main()
{
	complex c1(3,5);
	complex c2(4,6);
	complex c3;
	c3 = c1+c2;
	c3.display();
	
	return 0;
	
}