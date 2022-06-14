#include<iostream>
using namespace std;

template <class T>
T diff(T x, T y){
	T d = x - y;
	return d;
}
int main(){
	int p = diff(5, 2);
	cout << p << endl;
	
	float q = diff(5.5f , 2.25f);
	cout << q << endl;
	
	return 0;
}