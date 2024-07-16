/* title: Week 16 - E_Flower_City_Fence.cpp */
/* created: 2024-07-16 22:56:21 */
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
        ll n;
        cin >> n;

        vector<ll> v(n+1), freq(n+1);
        for(ll i=1; i<=n; i++) {
            cin >> v[i]; 
        }
        if(v[1] != n) {
            cout << "NO\n";
            continue;
        }
        for(ll i=1; i<=n; i++) {
            freq[v[i]]++;
        }
        for(ll i=n-1; i>=1; i--) {
            freq[i] += freq[i+1];
        }

        if(freq == v) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}