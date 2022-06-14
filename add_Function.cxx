#include<iostream>
using namespace std;

int add(int x, int y){
	return x+y;
}

int main(){
	int a= 10, b=15, c;
	c = add(a,b);
	cout << c;
	return 0;
}