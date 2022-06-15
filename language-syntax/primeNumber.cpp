#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout << "Enter the number : " ;
	cin >> n;
	for(int i=2; i<n; i++){
		if(n%i==0)
		sum+=i;
		
	}
	if(sum== 0)
	cout <<n<<" is a prime number."<<endl;
		else
		cout<<n<<" is not a prime number" << endl;
	return 0;
}