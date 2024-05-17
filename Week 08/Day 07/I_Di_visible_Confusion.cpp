/* title: Week 8 - I_Di_visible_Confusion.cpp */
/* created: 2024-05-17 11:52:08 */
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
        bool flag = true;
        
        for(ll i=1; i<=n; i++) {
            ll x;
            cin >> x; 

            bool found = false;
            for(ll j=i+1; j >= 2; j--) {
                if(x % j != 0) { 
                    found = true;
                    break;
                }
            }
            flag = flag && found; 
        }
        if(flag) cout << "YES\n"; 
        else cout << "NO\n"; 
    }
    return 0;
}