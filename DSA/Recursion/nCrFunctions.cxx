#include<iostream>
using namespace std;

int fact(int n){
	if(n==0) return 1;
	else return fact(n-1)*n;
}

int nCr(int n, int r){
	int Num = fact(n);
	int Den = fact(r)*fact(n-r);
	return Num/Den;
}

int main()
{
	cout << nCr(5,2);
	return 0;
	
}