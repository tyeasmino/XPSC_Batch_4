/* title: Week 15 - G_Paranoid_String.cpp */
/* created: 2024-08-08 01:11:48 */
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

        string s;
        cin >> s;

        ll ans = n;
        for(ll i=1; i<n; i++) {
            if(s[i-1] != s[i]) {
                ans += i; 
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}