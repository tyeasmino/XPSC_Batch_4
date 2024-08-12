/* title: Week 13 - L_Vaccination.cpp */
/* created: 2024-08-12 22:14:58 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, k, d, w;
        cin >> n >> k >> d >> w;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        ll ans = 0, time, available=k;
        for(ll i=0; i<n; i++) {
            if(i==0 || time<a[i] || available<1) {
                available=k;
                time=a[i]+d+w;
                ans++;
            }
            available--;
        }
        cout << ans << endl;
    }
    
    return 0;
}