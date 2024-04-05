/* created: 2024-04-05 12:23:44 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ll s1l = s1.length()-1, s2l = s2.length()-1;

        if(s1 == s2) cout << "=\n";
        else if(s1[s1l] == s2[s2l]) {
           if(s1[s1l] == 'S') {
                if(s1l < s2l) cout << ">\n";
                else cout << "<\n";
           }
           else {
                if(s1l > s2l) cout << ">\n";
                else cout << "<\n";
           }            
        }  
        else {
           if(s1[s1l] < s2[s2l]) cout << ">\n"; 
           else cout << "<\n";
        } 
    }
    
    return 0;
}