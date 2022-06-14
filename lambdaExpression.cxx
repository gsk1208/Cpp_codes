#include<iostream>
using namespace std;

// unnamed function  capture Area- parameter area - body of the function
int main()
{
	[](){cout << "Hello world !\n";}();
	int a=12, b=10;
	[a,b](){cout << a << "  "<< b<< endl;}();
	[&] (){cout << ++a << "  " << ++b << endl;}();
	
	auto f = [](int x, int y){ return x +y;};
	cout << f(4,6);
	
	return 0;
	
}