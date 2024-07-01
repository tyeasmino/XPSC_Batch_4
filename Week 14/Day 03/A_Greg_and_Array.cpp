/* title: Week 14 - A_Greg_and_Array.cpp */
/* created: 2024-07-01 23:06:27 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005], p[100005], q[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m, k;
    cin >> n >> m >> k;
    for(ll i=1; i<=n; i++) cin >> a[i];

    vector<pair<ll, ll>> v(m+1);
    vector<ll> val(m+1);

    for(ll i=1; i<=m; i++) {
        ll l, r, x;
        cin >> l >> r >> x;
        v[i] = {l, r};
        val[i] = x;
    }

    for(ll i=1; i<=k; i++) {
        ll x, y;
        cin >> x >> y;
        q[x]++;
        q[y+1]--;
    }

    for(ll i=1; i<=m; i++) q[i] += q[i-1];
    for(ll i=1; i<=m; i++) val[i] = val[i]*q[i];

    for(ll i=1; i<=m; i++) {
        ll l=v[i].first, r=v[i].second;
        p[l] += val[i];
        p[r+1] -= val[i];
    }

    for(ll i=1; i<=n; i++) p[i] += p[i-1];
    for(ll i=1; i<=n; i++) cout << p[i]+a[i] << " ";

    return 0;
}