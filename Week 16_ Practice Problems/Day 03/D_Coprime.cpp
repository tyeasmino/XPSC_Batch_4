/* title: Week 8 - W_Coprime.cpp */
/* created: 2024-05-19 22:23:33 */
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
        ll n, x, ans = -1;
        cin >> n;

        vector<ll> v(1001, 0);
        for(ll i=1; i<=n; i++) {
            cin >> x; 
            v[x] = i;
        }

        for(ll i=1; i<=1000; i++) {
            for(ll j=1; j<=1000; j++) {
                if(v[i] && v[j] && __gcd(i, j) == 1) {
                    ans = max(ans, v[i]+v[j]);
                }
            }
        }
        cout << ans << endl;
    }    
    return 0;
}