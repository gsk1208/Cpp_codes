#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout << "Enter n ";
	cin >> n;
	for(int i=1; i<=n; i++){
		if(n%i ==0){
			sum += i;
		}
	}                      // sum of the factors = 2 x the number
		cout << "sum is "<< sum<< endl;
		if (2*n == sum)
		cout << n << " is a perfect number.\n";
		else
		cout << n << " is not a perfect number.\n";
		

	return 0;
}