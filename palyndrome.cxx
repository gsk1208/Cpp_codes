#include<iostream>
using namespace std;

int main(){
	long int n,m;
	long int r, rev=0;

	cout << "Enter the nunber : ";
	cin >> n;
	m = n;
	
	while(n>0){
		r = n%10;
		n= n/10;
		rev = rev*10+r;
	}
	
	if(rev == m){
		cout << m << " is a palyndrome." << endl;
	}
	else 
		cout << m << " is not a palyndrome." << endl;
		
		return 0;
}