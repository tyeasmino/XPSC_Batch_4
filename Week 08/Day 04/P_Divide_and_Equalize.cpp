/* title: Week 8 - P_Divide_and_Equalize.cpp */
/* created: 2024-05-14 10:05:10 */ 
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
        
        ll x;
        cin >> x;  
        vector<ll> a(x);
        for(ll i=0; i<x; i++) cin >> a[i];

        map<ll, ll> cnt;
        for(ll i=0; i<x; i++) {
            for(ll j=2; j*j <= a[i]; j++) {
                if(a[i] % j == 0) {
                    while (a[i] % j == 0)
                    {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }

            if(a[i] > 1) cnt[a[i]]++;
        }    
           
        bool ok = true;
        for(auto [m, y] : cnt) {
            if(y % x != 0) {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }    
    return 0;
}