#include<iostream>
using namespace std;

/*
void swap(int a, int b){           // pass by value
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=10, y= 20;
    swap(x,y);                    //call by value
    cout << x << " " << y <<endl;
    return 0;
}
*/


void swap(int *a, int *b){          //pointers take adress  // pass by adress
    int temp = *a;                   // dereferencing
    *a = *b;
    *b = temp;
}

int main(){
    int x=10, y= 20;
    swap(&x,&y);        // adresses     //call by adress
    cout << x << " " << y <<endl;
    return 0;
}


/*
void swap(int &a, int &b){           // pass by reference
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=10, y= 20;
    swap(x,y);       // reference wont occupy any memory  //call by reference
    cout << x << " " << y <<endl;
    return 0;
}
*/