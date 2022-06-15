#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("my.txt");
	
	if(ifs)
	cout << "File is opened\n";
	
	string s1;
	string s2;
	int num;
	
	ifs >> s1 >> s2 >> num;
	
	cout << "Line 1 : " << s1 << endl;
	cout << "Line 2 : " << s2 << endl;
	cout << "Line 3 : "<< num << endl;
	
	if(ifs.eof())
	cout << "file ended\n";
	ifs.close();
	return 0;
}