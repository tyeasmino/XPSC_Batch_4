/* title: Week 12 - H_Maximal_AND.cpp */
/* created: 2024-06-21 10:09:06 */
#include<bits/stdc++.h>
#define ll long long
#define f0ton for(ll i=0; i<n; i++)
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
        f0ton cin >> a[i];

        vector<bitset<31>> v(n);
        f0ton {
            bitset<31> temp(a[i]);
            v[i] = temp;
        }

        ll ans = 0;
        for(ll j=30; j>=0; j--) {
            ll needOne = 0;
            f0ton {
                if(v[i][j] == 0) needOne++;
            }
            if(needOne <= k) {
                k -= needOne;
                ans += (1 << j);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}