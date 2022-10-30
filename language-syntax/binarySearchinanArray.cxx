#include<iostream>
using namespace std;

int main(){
	int A[9] = {1, 3 ,14 , 19, 25, 31, 40, 49, 55};
	int l, h, key;
	l = 0;
	h = 8;
	cout << "Enter the key ";
	cin >> key;  // binary search is faster. than linear.
	
	while(l<=h){
		int mid = (l+h)/2;
		if(key == A[mid]){
		cout << "The key is found at index : " << mid;
		return 0;
		}
		
		else if (key < A[mid])
			h = mid-1;
		
		else 
			l = mid +1;
			
	}
	cout << "The key is not found";
	return 0;
}