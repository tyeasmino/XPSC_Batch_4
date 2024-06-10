/* title: Week 12 - E_Epic_Transformation.cpp */
/* created: 2024-06-10 22:40:05 */
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
        ll n, maximum=0; 
        cin >> n;

        ll a[n];
        map<ll, ll> mp;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            maximum = max(mp[a[i]], maximum);
        }

        ll remaining = n - maximum;
        if(remaining >= maximum && n%2 == 1) cout << 1 << endl;
        else if(remaining >= maximum && n%2 == 0) cout << 0 << endl;
        else cout << maximum - remaining << endl;
    }
    
    return 0;
}