#include<iostream>
using namespace std;

int main(){


    cout << sizeof(long int)<< " "<< sizeof(int)<< endl;

    char str[]= "felicitate";
    int H=0, x=0;

    for(int i=0; str[i] !='\0'; i++)
    {
        x=1;
        x=x<<(str[i]-97);

        if((x&H))
            cout << str[i]<< " is a duplicate" << endl;
        else
            H=(x||H); //**  
    }

    return 0;
}