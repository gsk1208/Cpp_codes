#include<iostream>
#include<stdio.h>
using namespace std;

struct card{
    int face_value;   //1 for a, and so on.... 13 for k
    int shape;        // 1 for spade, 2 for diamond, leaf and heart
    int color;        // 0 for black and 1 for white
};

int main(){
    struct card deck[52];     //array of struct card
    int i=0;

        for(int f=0; f< 13; f++){
            for(int s=0; s<4; s++){
                for (int c=0; c<2; c++){
                    deck[i] = {f, s, c};
                    /* deck[i].face_value = f;
                    deck[i].shape = s;                 // for detailed
                    deck[i].color = c; */
                    i++;
                }
            }
            
        }

        cout << deck[25].color<< endl;
        cout << deck[25].shape << endl;
        cout << deck[25].face_value << endl;
        cout << deck[35].color<< endl;
        cout << deck[35].shape << endl;
        cout << deck[35].face_value << endl;
        cout << "hello";
        return 0;
    
}