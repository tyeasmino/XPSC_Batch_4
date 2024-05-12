/* title: Week 6 - F_Number_Game.cpp */
/* created: 2024-05-12 02:23:54 */
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
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        auto ok = [&](ll mid) {
            multiset<ll> ms;
            for(auto a : v) ms.insert(a);

            for(ll i=0; i<mid; i++) {
                if(ms.empty()) return false;
                ll find = mid - i;
                auto it = upper_bound(ms.begin(), ms.end(), find);
                if(it == ms.begin()) return false;
                it--;

                ms.erase(it);
                if(!ms.empty()) {
                    it = ms.begin();
                    ll x = (*it);
                    x += find;
                    ms.erase(it);
                    ms.insert(x);
                }
            }
            return true;
        };

        ll l=0, r=n, ans;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if(ok(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }    
    return 0;
}