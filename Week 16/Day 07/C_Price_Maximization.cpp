/* title: Week 13 - C_Price_Maximization.cpp */
/* created: 2024-08-08 10:38:00 */
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

        ll ans = 0;
        for(ll i=0; i<n; i++) {
            ans += (a[i]/k);
            a[i] %= k;
        }

        sort(a.begin(), a.end());
        ll low=0, high=n-1;

        while (low < high) {
            if(a[low]+a[high] >= k) {
                ans++;
                high--;
            }
            low++;
        }
        cout << ans << endl;
    }
    
    return 0;
}