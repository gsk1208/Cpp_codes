#include<iostream>
using namespace std;

int main(){
	int A[] = {2, 6, 1, 30, 13, 24, 5, 2};
	int max = A[0];
	
	for(int i = 0; i < 8; i++){
		if(A[i] > max){
			max = A[i];
		}
		
	}
	cout << "The max element is "<< max << endl;
	return 0;
}