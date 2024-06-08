/* title: Week 12 - B_Card_Game.cpp */
/* created: 2024-06-08 23:41:26 */
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
        ll n, total=0;
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] > 0) total += a[i]; 
        }

        ll ans = 0, possible = 0;
        for(ll i=0; i<n; i++) {
            if(i % 2 == 0) {
                if(a[i] > 0) {
                    possible = max(possible, total);
                    total -= a[i];
                } else {
                    possible = max(possible, total+a[i]);
                }
            } else {
                if(a[i] > 0) {
                    total -= a[i];
                    possible = max(possible, total);
                } else {
                    possible = max(possible, total);
                }
            }
        }
        cout << ans + possible << endl;
    }
    
    return 0;
}