/* title: Week 9 - I_Subarray_Sums_I.cpp */
/* created: 2024-08-17 01:19:52 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    map<ll, ll> mp;
    ll sum = 0, cnt=0;
    mp[sum] = 1;

    for(ll i=0; i<n; i++) {
        sum += a[i];

        ll check = sum - s;
        if(mp.find(check) != mp.end()) cnt++;
        mp[sum] = 1;
    }

    cout << cnt; 
    return 0;
}