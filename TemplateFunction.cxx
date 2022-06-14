#include<iostream>
using namespace std;

Template <class T>
T diff(T x, T y){
	T d = x - y;
	return d;
}
void main(){
	int p = diff(5, 2);
	cout << p << endl;
	
	float q = diff(5.5f - 2.25f);
	cout << q << endl;
	
	return 0;
}