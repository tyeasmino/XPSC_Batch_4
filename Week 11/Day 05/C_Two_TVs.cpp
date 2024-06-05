/* title: Week 11 - C_Two_TVs.cpp */
/* created: 2024-06-05 23:49:00 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, l, r, sum = 0;
    cin >> n;
    map<ll,ll> d;
    for(ll i=1; i<=n; i++) {
        cin >> l >> r;
        d[l]++, d[r+1]--;
    }

    bool ok = true;
    for(auto [x, v] : d) {
        sum += v;
        if(sum > 2) {
            ok = false;
            break;
        }
    }

    (ok) ? cout << "YES" : cout << "NO";
    return 0;
}