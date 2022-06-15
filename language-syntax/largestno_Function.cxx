#include<iostream>
using namespace std;

int max(int a, int b, int c){
	if(a>=b && a>=c)
		return a;
	else if(b>=a && b>=c)
		return b;
	else if(c >=a && c>=b)
		return c;
}

int main(){
	int a= 2, b=7,c=4;
	int m = max(a,b,c);
	cout<< m;
	return 0;
}