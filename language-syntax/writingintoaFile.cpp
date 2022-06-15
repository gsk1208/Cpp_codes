#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream my;
	my.open("mine.txt");
	
	if(my.is_open()){
	my << 6  << endl;
	my <<" Iam Groot from MCU" << endl;
	my << 25 << endl;
	
	my.close();
	}
	else 
	cout << "Not opened";
	return 0;
}