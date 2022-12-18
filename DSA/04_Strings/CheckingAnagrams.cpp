#include<iostream>
using namespace std; 

//_____________Anagrams are two words formed with same letters_______

bool checkAnagram(string A, string B)
{
    int i=0,j=0;           

    for(i = 0; A[i] != '\0'; i++) {A[i]-=97;}
    for(j = 0; B[j] != '\0'; j++) {B[j]-=97;}
    int H[26]={0};

    if(i==j){
        for(i = 0; A[i] != '\0'; i++) 
        {
            H[A[i]]++;
        }

        for(j = 0; B[j] != '\0'; j++) 
        {
            H[B[j]]--;
            if(H[B[j]]< 0)
            {
                return false;
            }
        }

        return true;
    }

    else
    {
        cout << "ERROR: Strings are of different lengths"<<endl;
    }
    return 0;
}

int main()
{
    char A[]="medical";
    char B[]="dwecimal";
    
    if(checkAnagram(A, B))
        cout << "Anagram" << endl;
    else
        cout << "Not anagram" << endl;
        

    return 0;
}