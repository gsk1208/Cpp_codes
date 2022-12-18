#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[20] = "Welcome Home Ravi";

    int vcount = 0, Ccount = 0, Wcount = 0;

    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'u')
        vcount++;
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        Ccount++;
    }

    cout << "Vowel Count: " << vcount << endl;
    cout << "Consonant Count: " << Ccount << endl;

    for (int i = 0;str[i] !='\0'; i++)
    {
        if(str[i] == ' ' && str[i-1] != ' ')
        Wcount++;
    }

    cout << "Word count: " << Wcount+1 << endl;

}