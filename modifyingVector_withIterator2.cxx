#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> v = {12, 34, 15, 25, 17};
	v.push_back(27);
	v.push_back(35);
	
	vector <int> :: iterator itr;
	for(itr = v.begin(); itr != v.end(); itr++){
		cout << *itr << endl;
	}
	
	cout << endl << "break" << endl << endl;
	
	for(itr = v.begin(); itr != v.end(); itr++){
		cout << ++*itr << endl;
	} // elements are modified.
	
	cout << endl << "break" << endl << endl;
	
	for(itr = v.begin(); itr != v.end(); itr++){
		cout << *itr << endl;
	} // check
	
	return 0;
}