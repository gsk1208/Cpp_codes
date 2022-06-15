#include<iostream>
using namespace std;

int max(int a, int b){
	return a>=b ? a:b;
}

int min(int a, int b){
	return a<=b ? a:b;
}

// single function pointer can point to multiple functions that have same signature : (int, int)

int main()
{
	int (*fp)(int ,int);
	
	fp = max;
	cout <<	(*fp)(10,15);
	cout << endl;
	
	
	fp = min;
	cout << (*fp)(10,15);
	cout << endl;
	
	return 0;
	
}