/* title: Week 13 - O_Final_Boss.cpp */
/* created: 2024-08-12 22:52:54 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll h, n;
        cin >> h >> n;

        vector<ll> a(n), c(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> c[i];

        ll ans=0, l=1, r=1e11;
        while (l <= r) {
            ll mid = (l+r)/2;
            ll done = 0;
            for(ll i=0; i<n; i++) {
                ll possible = (mid-1)/c[i] + 1;
                done += possible * a[i];
                if(done >= h) break;
            }

            if(done >= h) ans = mid, r = mid - 1;
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}