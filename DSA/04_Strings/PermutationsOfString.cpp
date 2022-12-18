#include<iostream>
using namespace std;

void perm(char s[], int k)
{
    static int A[5] = {0};
    static char res[5];
    int i;

    if(s[k] != '\0')
    {
        for(i = 0; s[i] != '\0'; i++)
        {
            if(A[i]==0)
            {
                res[k]=s[i];
                A[i]=1;
                perm(s, k+1);
                A[i]=0;
            }
        }
    }

    else    
    {
        res[k]='\0';
        for(int t = 0; res[t] != '\0'; t++) cout << res[t];
        cout << endl;
    } 
}

int main()
{
    char s[]="ABC";

     perm(s,0);

    return 0;
}
