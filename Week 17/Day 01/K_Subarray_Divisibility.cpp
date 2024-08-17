/* title: Week 9 - K_Subarray_Divisibility.cpp */
/* created: 2024-08-17 21:34:17 */
#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n;

    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin >> x;
        a[i] = x % n;
    }

    map<ll,ll> mp;
    ll ans=0;
    for(ll i=1; i<n; i++) {
        a[i] = (a[i]+a[i-1]+n)%n ;
    }

    for(ll i=0; i<n; i++) {
        if(mp[a[i]]) {
            ans += mp[a[i]];
        }
        mp[a[i]]++;
    }
 
    cout << ans+mp[0];
    return 0;
}