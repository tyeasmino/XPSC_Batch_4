/* title: Week 11 - C_Little_Girl_and_Maximum_Sum.cpp */
/* created: 2024-06-05 23:33:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, q, l, r;
    cin >> n >> q;

    vector<ll> a(n), d(n+1);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=1; i<=q; i++) {       
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    for(ll i=1; i<=n; i++) d[i] = d[i-1]+d[i];

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    ll ans = 0;
    for(ll i=0; i<n; i++) {
        ans += d[i]*a[i];
    }

    cout << ans; 
    return 0;
}