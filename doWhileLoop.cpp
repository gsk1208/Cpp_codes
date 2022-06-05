#include<iostream>
using namespace std;

int main(){
    int n,i;
    i=1;
    cout << "enter the value of n ";
    cin >> n;
    do{
        cout << i << endl;
        i++;
    }while(i>n);
    return 0;
}