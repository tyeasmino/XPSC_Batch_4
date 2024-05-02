/* title: Week 6 - F_String_Game.cpp */
/* created: 2024-05-02 02:20:41 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string t, p;
    cin >> t;
    cin >> p;

    ll n=t.size(), m=p.size();
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    auto ok = [&](ll mid) {
        vector<bool> remove(n+1);
        for(ll i=0; i<mid; i++) {
            remove[a[i]] = true;
        }

        ll j=0;
        bool found = false;
        for(ll i=0; i<n; i++) {
            if(t[i] == p[j] && !remove[i+1]) j++;
            if(j == m) {
                found = true;
                break;
            }
        }
        return found;
    };

    ll l=0, r=n, mid, ans=0;
    while (l <= r)
    {
        mid = (r+l) / 2;
        if(ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid-1;
        }
    }
    
    cout << ans <<"\n"; 
    return 0;
}