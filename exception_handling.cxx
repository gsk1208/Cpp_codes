#include<iostream>
using namespace std;

float add(float x,float y){
	if(y == 0)
	throw 1;
	
	return x/y;
}

int main()
{
	//float a=60, b= 7.5;
	float a= 30, b= 0;
	try{
	float c = add(a,b);
	cout << c << endl;
	}
	catch(int e){
		cout << "Error code :" << 0 << endl;
		cout << "division by zero\n";
	}
	
	cout << "Finish";
	
}