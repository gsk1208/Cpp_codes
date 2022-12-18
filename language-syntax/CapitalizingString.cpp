#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    cout << "Enter the string " <<endl;
    getline(cin, str);

    for(int i=0; i< str.length(); i++){
        for(int i = 0; str[i] != '\0'; i++)
        {
        if(str[i] >= 65 && str[i] <= 90)
        str[i] += 32;
        
        
        
        else
        {
        str[i] -= 32;
        }

        cout << str[i];
        }
    }
    return 0;
}