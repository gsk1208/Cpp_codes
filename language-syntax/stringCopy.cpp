#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20] = "Hello dude";
    char s2[20];

    strcpy(s2, s1);     //strcpy(destination, source);
    cout << s2 << endl;

    char p1[20] = "Hello dude";
    char p2[20];
    strncpy(p2, p1, 5);  //strncpy(destination, source, size of source)
    cout << p2 << endl; 

    
    return 0;
}