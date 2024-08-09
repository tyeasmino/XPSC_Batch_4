/* title: Week 13 - G_Deep_Down_Below.cpp */
/* created: 2024-08-09 22:07:30 */
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
        ll c; 
        cin >> c;
        vector<pair<ll,ll>> v(c);
        for(ll i=0; i<c; i++) {
            ll n; 
            cin >> n;

            vector<ll> a(n);
            ll maxP=-1;
            for(ll j=0; j<n; j++) {
                cin >> a[j];
                maxP = max(maxP, a[j]-j+1);
            }

            v[i] = {maxP, n};
        }

        sort(v.begin(), v.end());
        ll l=v[0].first, r=v[c-1].first;
        ll ans = 1e18;

        while (l <= r)
        {
            ll mid = (l+r)/2;
            ll current = mid;
            bool ok = 1;

            for(ll i=0; i<c; i++) {
                if(current >= v[i].first) current += v[i].second;
                else {
                    ok=0;
                    break;
                }
            }
            
            if(ok) {
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