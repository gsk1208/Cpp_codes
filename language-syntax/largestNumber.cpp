#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "Enter 3 no.s " << endl;
	cin >> a>> b>>c;
	if(a>b && a>c){
		cout << a << " is the largest number" << endl;
	}
	
	else if(b>c && b>a){
		cout << b << " is the largest number" << endl;
	}
	
	else 
	cout << c << " is the largest number";
	return 0;
}