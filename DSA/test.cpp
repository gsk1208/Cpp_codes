#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
public:
	
	bool fascinating(int n) {

	    
	    string geek = to_string(n) + to_string(n*2) + to_string(n*3);
	    int freq[10] = {0};
	    
	    for(int i=0; i!= '\0'; i++)
	    {
	        freq[geek[i]-'0']++;
	    }
	    
	    for(int i=1; i<10; i++)
	    {
	        if(freq[i]!=1)
	            return false;
	    }
	    
	    return true;
	}
};

int main()
{

        int n = 192;
        // cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
		return 0;

}

