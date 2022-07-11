#include<iostream>
using namespace std;

double e(int x, int n){
	double r=1;
	static double f=1, p=1;

	if(n==0)
		return r;
	r= e(x,n-1);
	p = p*x;
	f =  f*n;
	
	return r+p/f;
	
}
	

int main()
{
		cout << e(2,16);
		return 0;
}