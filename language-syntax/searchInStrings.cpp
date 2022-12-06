#include<iostream>
using namespace std;
#include<cstring>

int main(){
    char s1[20] = "programming";
    char s2[20] = "gramming";
    
  
    

    cout << "strstr  : " << strstr(s1, s2) << endl;
    cout << "strstr  : " << strrstr(s1, 'g') << endl;
    cout << "strchr  : " << strchr(s1, 'm') << endl;
    cout << "strchr  : " << strrchr(s1, 'm') << endl;

    cout << "strcmp  : " << strcmp(s1, s2) << endl; // string comparing  alphabatically
    return 0;

}