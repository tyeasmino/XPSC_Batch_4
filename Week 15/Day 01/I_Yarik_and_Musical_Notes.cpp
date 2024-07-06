/* title: Week 14 - I_Yarik_and_Musical_Notes.cpp */
/* created: 2024-07-05 22:45:16 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> freq;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        ll ans = 0, cons = 0;
        sort(a.begin(), a.end());

        for(ll i=0; i<n; i++) {
            cons++;
            if(i==n-1 or a[i+1] != a[i]) {
                ans += ((cons*(cons-1))/2);
                cons = 0;
            }

            for(ll j=1; ; j++) {
                ll x = a[i]*(1<<j);
                if(x>a[n-1]) break;
                if(!freq[x]) continue;
                if(x-a[i]==j) ans += freq[x];
            }
        }

        cout << ans << endl;
        
    }
    
    return 0;
}