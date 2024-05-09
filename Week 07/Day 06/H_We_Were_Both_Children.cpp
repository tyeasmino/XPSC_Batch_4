/* title: Week 7 - H_We_Were_Both_Children.cpp */
/* created: 2024-05-09 10:37:39 */
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
        ll n, ans=0;
        cin >> n; 

        vector<ll> a(n), freq(n+1, 0);
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] <= n) freq[a[i]]++;
        }

        for(ll i=1; i<=n; i++) {
            ll cnt = 0;
            for(ll j=1; j*j <= i; j++) {
                if(i % j == 0) {
                    cnt += freq[j];
                    if(j*j != i) {
                        cnt += freq[i/j];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    
    return 0;
}