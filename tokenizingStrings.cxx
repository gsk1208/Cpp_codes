#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "x=10;y=20;z=15";
	char *token = strtok(s1, ";");
	while(token != nullptr){
		cout << token << endl;
		token = strtok(nullptr, ";");
	}

		return 0;		
}
