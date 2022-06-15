#include<iostream>
using namespace std;

int main(){
	
	int A[10], N;
	int n = 10;
	
	
	cout << "Enter the elements : " << endl;
	for(int i= 0; i<n ; i++){
		cin >> A[i];
	}
	cout << "Enter an element , to search :\n";
	cin >> N;
	
	for(int i= 0; i<n ; i++){
		if(A[i] == N)
		cout << "The element is found at index: "<< i << endl;
	}
		
	return 0;
}
