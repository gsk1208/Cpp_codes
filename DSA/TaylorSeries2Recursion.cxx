#include<iostream>
using namespace std;

double e(int x, int n){
	static double r= 1;
	
	if(n==0) return r;
	
	r = 1+ x*r/n;
    return e(x, n-1);
}

int main()
{
	cout << e(2,18);
	return 0;
	
}
