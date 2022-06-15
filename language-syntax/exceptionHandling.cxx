#include<iostream>
using namespace std;

int main()
{
	float x= 5, y = 0, z;
	
	try {
		if(y ==0)
		throw "n";
		
		cout << x/y << endl;
	}
	catch(int e){
		cout << "error! division by zero" << endl;
	}
	catch(double e){
		cout << "double catch\n";
		cout << "Error - div by zero\n";
	}
	catch(...){
		cout << "all catch\n";
		cout << "Error - div by zero\n";
	}
	
	cout << "bye";
	
}