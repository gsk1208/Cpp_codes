#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	int i=1;
	cout<<"Enter the value of n ";
	cin >> n;
	while(i<=n){
		sum+=i;
		i++;    //Wloop is used when you dont know how many times to repeat.
	}
	cout << "sum is "<<sum<< endl;
	return 0;
}