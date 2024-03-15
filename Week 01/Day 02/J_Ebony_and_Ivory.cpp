#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    bool ans = 0;
    cin >> a >> b >> c;

    if(a==c || b==c) cout << "Yes";
    else {
        for(int i=0; i<=c; i++) {         
            for(int j=0; j<=c; j++) {
                if(a*i + b*j == c) { 
                    ans = 1;
                    break;
                } 
            } 
        }
        (ans) ? cout << "Yes" : cout << "No";   
    }

    return 0;
}