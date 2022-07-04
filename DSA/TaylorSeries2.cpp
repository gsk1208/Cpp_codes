#include<iostream>
using namespace std;

double e(int x, int n){
    static double r=1;
    if(n==0){return r;}
    else {
        r = 1+x*r/n;
        return e(x,n-1);
    } 
}

int main(){
    double t = e(1,10);
    cout << t;
}