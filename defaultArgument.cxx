#include<iostream>
using namespace std;

int add(int a, int b, int c=0){
	return a+b+c;
}
// default arguments (like int c=0) should be filled from the right side
int main(){
	int p,q;
	p = add(1, 2, 3);
	q = add(5,6);
	cout << p << endl << q;
	return 0;
}