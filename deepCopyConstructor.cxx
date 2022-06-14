#include<iostream>
using namespace std;

class test{
	int a;
	int *p;
	
	test(int x){
		a = x;
		p = new int[a];
	}
	
	test(test &t){       //deep copy constructor
		a = t.a;
		//p = t.p;  wrong
		p = new int[a]; // creating seperate array
	}
};

int main()
{
	
}