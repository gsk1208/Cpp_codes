#include<iostream>
using namespace std;

int main(){
	int n,fact=1;
	cout << "Enter the value of n ";
	cin >> n;
	for(int i=1; i<=n; i++){
		fact *=i;
	}
	cout << n << "! = "<< fact;
	return 0;
}