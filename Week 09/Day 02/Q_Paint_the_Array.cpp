/* title: Week 8 - Q_Paint_the_Array.cpp */
/* created: 2024-05-19 00:23:27 */
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

        vector<ll> a(n);
        ll even = 0, odd = 0, ans = 0;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(i % 2 == 0) even = __gcd(even, a[i]);
            else odd = __gcd(odd, a[i]);
        }

        bool flag = true;
        for(ll i=0; i<n; i += 2) {
            flag = flag && (a[i] % odd != 0);
        }
        if(flag) ans = odd;
        else {
            flag = true;
            for(ll i=1; i<n; i += 2) {
                flag = flag && (a[i] % even != 0);
            }
            if(flag) ans = even;
        }
        cout << ans << endl;
    }
    
    return 0;
}