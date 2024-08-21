/* title: Week Practice Problems - G_Sum_of_Medians.cpp */
/* created: 2024-08-21 22:30:22 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n*k);

        for(ll i=0; i<n*k; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll ans = 0, gap=(n/2)+1;
        for(ll i=0; i<k; i++) {
            ll j= n * k - (i+1) * gap;
            if(j >= 0) ans += a[j];
        }
        cout << ans << endl;
    }    
    return 0;
}
