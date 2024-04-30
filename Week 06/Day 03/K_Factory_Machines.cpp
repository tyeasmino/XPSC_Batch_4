/* title: Week 6 - K_Factory_Machines.cpp */
/* created: 2024-04-30 21:29:53 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, t;
    cin >> n >> t;

    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];

    auto check = [&](ll m) {
        ll total = 0;
        for(ll i=0; i<n; i++) {
            total += (m / a[i]);
            if(total >= t) return true;
        }
        return false;
    };

    ll l=1, r=1e18, mid, ans; 
    while (l <= r)
    {
        mid = (r + l) / 2;
        if(check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}