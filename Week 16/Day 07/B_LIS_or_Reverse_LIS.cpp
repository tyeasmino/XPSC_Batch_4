/* title: Week 13 - B_LIS_or_Reverse_LIS.cpp */
/* created: 2024-08-08 10:37:25 */
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
        for(ll i=0; i<n; i++) cin >> a[i];

        map<ll, ll> mp;
        for(auto c: a) mp[c]++;
        
        ll one=0, more=0;

        for(auto i: mp) {
            if(i.second > 1) more++;
            else one++;
        }

        cout << more+(one+1)/2 << endl;
    }
    
    return 0;
}