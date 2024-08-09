/* title: Week 13 - D_Maximal_AND.cpp */
/* created: 2024-08-08 10:38:29 */
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        vector<bitset<31>> b(n);
        for(ll i=0; i<n; i++) {
            bitset<31> temp(a[i]);
            b[i]=temp;
        }

        ll ans = 0;
        for(ll i=30; i>=0; i--) {
            ll need = 0;
            for(ll j=0; j<n; j++) {
                need += (b[j][i]==0);
            }

            if(need <= k) {
                k -= need;
                ans += (1<<i);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}