/* title: Week 8 - K_Swords.cpp */
/* created: 2024-05-17 13:28:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, max = 0;
    cin >> n;

    vector<ll> a(n), b;
    for(ll i=0; i<n; i++) cin >> a[i];  

    sort(a.begin(), a.end());
    max = a[n-1]; 
    // cout << "x - ";
    for(ll i=0; i<n; i++) {
        if(a[i] != max) {
            ll x = max - a[i];
            // cout << x << " "; 
            b.push_back(x);
        }
    }    
    // cout << endl;
    // cout << "cnt - ";

    ll cnt = b[0], bsize = b.size(), ans = 0;
    for(ll i=1; i<bsize; i++) {
        cnt = __gcd(cnt, b[i]);
        // cout << cnt << " ";
    }
    // cout << endl;
    // cout << "ans - ";

    for(ll i=0; i<bsize; i++) {
        ans += b[i] / cnt;
        // cout << ans << " ";
    }

    cout << ans << " " << cnt;
    
    return 0;
}