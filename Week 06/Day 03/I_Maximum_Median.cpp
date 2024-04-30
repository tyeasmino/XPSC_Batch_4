/* title: Week 6 - I_Maximum_Median.cpp */
/* created: 2024-04-30 22:31:48 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    auto check = [&](ll m) {
        ll cnt = 0;
        for(ll i=(n/2); i<n; i++) {
            if(a[i] < m) cnt += m - a[i];
            else cnt += 0;
        }
        return cnt <= k;
    };

    ll l=1, r=2e9, mid, ans; 
    while (l <= r)
    {
        mid = (r + l) / 2;
        if(check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}