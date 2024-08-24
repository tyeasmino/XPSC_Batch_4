/* title: Week 17 - C_AB_Flipping.cpp */
/* created: 2024-08-24 23:05:40 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n; 
        cin >> n;
        string s;
        cin >> s;

        ll ans = 0;
        for(ll i=0; i<n; i++) {
            if(s[i] == 'B') ans++;
            else break;
        } 

        for(ll i=n-1; i>=0; i--) {
            if(s[i] == 'A') ans++;
            else break;
        }

        ans = n - ans - 1;
        if(ans>-1) cout << ans << endl;
        else cout << 0 << endl;
    }    
    return 0;
}