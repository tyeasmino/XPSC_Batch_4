/* title: Week 14 - C_Boring_Day.cpp */
/* created: 2024-07-03 23:04:50 */
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
        ll n, l, r;
        cin >> n >> l >> r;

        ll a[n+1];
        for(ll i=0; i<n; i++) cin >> a[i];

        ll prefix[n+1];
        for(ll i=0; i<n; i++) prefix[i+1] = prefix[i]+a[i];

        ll sum = 0, m = 0, ans=0;
        for(ll i=0; i<n; i++) {
            while (prefix[i+1] - prefix[m] > r) {
                m++;
            }
            sum = prefix[i+1] - prefix[m];
            if(sum >= l) {
                m=i+1;
                ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}