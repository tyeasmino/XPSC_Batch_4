/* title: Week 17 - D_Jellyfish_and_Undertale.cpp */
/* created: 2024-08-24 23:19:49 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);

        ll ans = b;
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            ans += min(v[i], a-1);
        }

        cout << ans << endl;
    }
    
    return 0;
}