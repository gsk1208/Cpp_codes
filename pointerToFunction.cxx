#include<iostream>
using namespace std;

void display(){
	cout <<"Hello";
}

int main()
{
	void (*fp)();
	fp = display;
	(*fp)();
	return 0;
}