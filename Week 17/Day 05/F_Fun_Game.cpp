/* title: Week Practice Problems - F_Fun_Game.cpp */
/* created: 2024-08-21 22:05:20 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int flag = 0;
        for(ll i=0; i<n; i++) {
            if(s[i]=='1') flag = 1;
            if(s[i]=='0' && t[i]=='1' && flag==0) {
                flag = 2;
                break;
            } 
        }
        (flag == 2) ? cout << "NO\n" : cout << "YES\n";
    }
    
    return 0;
}