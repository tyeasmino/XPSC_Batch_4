/* title: Week 13 - E_Restaurant_Customers.cpp */
/* created: 2024-06-27 22:21:16 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    
    ll a, b, now = 0, result = 0;
    map<ll, ll> mp;
    for(ll i=0; i<n; i++) {
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }

    for(auto x : mp) {
        now += x.second;
        result = max(result, now);
    }
    cout << result;

    return 0;
}