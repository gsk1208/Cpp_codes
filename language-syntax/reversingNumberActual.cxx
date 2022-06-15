#include<iostream>
using namespace std;

int main(){
	int n, r, rev=0;
	cout << "Enter the number : ";
	cin >> n;
	
	while(n>0){
		r = n%10;
		n = n/10;
		rev = rev*10 + r;
	}
	
	cout<< "The reverse of number is : " << rev;
	return 0;
}