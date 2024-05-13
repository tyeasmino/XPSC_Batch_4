/* title: Week 5 - E_Preparing_Olympiad.cpp */
/* created: 2024-05-13 00:29:41 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, l, r, x, ans=0;
    cin >> n >> l >> r >> x;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    
    for(ll i=0; i < (1 << n); i++) { 
        ll mn = 1e18, mx = -1e18, cnt = 0, sum = 0;
        for(ll j=0; j<n; j++) {
            ll check = (1 << j);
            if(check & i) {
                cnt++; 
                sum += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
        }

        if(mx - mn >= x && sum >= l && sum <= r && cnt >= 2) ans++;
    }
    cout << ans << endl;
    return 0;
}