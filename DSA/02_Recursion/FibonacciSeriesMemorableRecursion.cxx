#include<iostream>
using namespace std;

int Fib[10];

int fib(int n){
	
	if( n<=1) {
	Fib[n]= n;
	return n;
	}
	else {
		
		if(Fib[n-2] == -1) Fib[n-2] = fib(n-2);
		if(Fib[n-1] == -1) Fib[n-1] = fib(n-1);
	
		
		return fib(n-2) + fib(n-1);
	}
}
		
	

int main()
{
	for(int i=0; i<10; i++)  Fib[i] = -1;
	
	cout << fib(6);
	return 0;
}