/* title: Week 13 - P_AGAGA_XOOORRR.cpp */
/* created: 2024-08-12 23:11:22 */
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

        vector<ll> a(n);
        ll check = 0;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            check ^= a[i];
        }

        if(check == 0) cout << "YES\n";
        else {
            ll cnt=0, check2=0;
            for(ll i=0; i<n; i++) {
                check2 ^= a[i];
                if(check2 == check) {
                    check2 = 0;
                    cnt++;
                }
            }

            if(cnt > 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}