#include<iostream>
using namespace std;
#include<cstring>

int main(){
    char s1[20] = "programming";
    char s2[20] = "gramming";
    
  
    

    cout << "strstr  : " << strstr(s1, s2) << endl;
    cout << "strrstr  : " << strrstr(s1, m) << endl;
    cout << "strchr  : " << strchr(s1, g) << endl;
    cout << "strrchr  : " << strrchr(s1, g) << endl;

    cout << "strcmp  : " << strcmp(s1, s2) << endl; // string comparing  alphabatically
    return 0;

}