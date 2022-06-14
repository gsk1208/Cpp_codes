#include<iostream>
using namespace std;
#include<map>

int main()
{
	map <int, string> m;
	
	m.insert(pair<int, string> (1, "Venu"));
	m.insert(pair<int, string> (2, "Devi"));
	m.insert(pair<int, string> (3, "Jerry"));
	m.insert(pair<int, string> (4, "Tim"));
	
	
	map <int, string> :: iterator itr;
	
	for(itr = m.begin(); itr != m.end(); itr++){
		cout << itr-> first << "  "<< itr-> second << endl;
	}
	
	map <int, string>:: iterator itr2 = m.find(2);
	cout << itr2-> first << "  "<< itr2-> second << endl;
	
	
}