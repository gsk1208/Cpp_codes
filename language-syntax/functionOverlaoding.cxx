#include<iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

int add(int a, int b, int c){
	return a+b+c;
}

float add(float a, float b){
	return a+b;
}


   //return type of function is never considered in function overloading.
   
int main(){
	int a=10, b=19,c=30;
	float p=5.67f, q=7.13f;
	
	int x=add(a,b);
	cout << x <<endl;
	
	int y=add(a,c,b);
	cout << y << endl;
	
	float z=add(p,q);
	cout << z << endl;
	
	return 0;
}