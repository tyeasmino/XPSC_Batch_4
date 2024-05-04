/* title: Week 6 - B_Building_an_Aquarium.cpp */
/* created: 2024-05-04 22:17:15 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, water;
        cin >> n >> water;
        
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];  

        auto ok = [&](ll mid) {
            ll totalWater = 0;
            for(ll i=0; i<n; i++) {
                if(mid > v[i]) totalWater+=(mid - v[i]);
            }
            // cout << "mid: " << mid << ", totalWater: " << totalWater << endl;
            if(totalWater >= water) return true;
            return false;
        };
        
        ll l=0, r=1e10, mid, ans;
        while (l < r) 
        {
            mid = (r + l) / 2;
            if(ok(mid)) {
                ans = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}