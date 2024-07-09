/* title: Week 14 - N_Same_Differences.cpp */
/* created: 2024-07-09 22:40:17 */
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

        map<ll,ll> mp;
        for(ll i=0; i<n; i++) {
            ll x;
            cin >> x;

            mp[x-i]++;
        }

        ll ans = 0;
        for(auto it : mp) {
            ll x = it.second;
            ans += (x*(x-1)) / 2; 
        }

        cout << ans << endl;
    }
    
    return 0;
}