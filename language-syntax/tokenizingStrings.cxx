#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[10] = "x=10; y=20; z=15";
	char *token = strtok(s1,";");
	while(token != Null){
		cout << token << endl;
		token = strtok(Null,";");
	}

		return 0;		
}
