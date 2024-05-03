/* title: Week 6 - E_Wooden_Toy_Festival.cpp */
/* created: 2024-05-03 14:08:35 */
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
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        auto ok = [&](ll mid) {
            ll l=0, cnt = 1;
            for(ll r=0; r<n; r++) {
                if((a[r]-a[l]) > (2*mid)) {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };

        ll l=0, r=1e9, mid, ans = 0;
        while (l <= r) {
            mid = (r+l) / 2;
            if(ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }    
    return 0;
}