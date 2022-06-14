#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v = { 2, 5, 4, 7, 3, 9};
	
	v.push_back(13);
	v.push_back(15);
	
	cout << "{";
	for (int x : v){
		cout << x << ", ";
	}
	cout << "}";
	
	return 0;
	
}