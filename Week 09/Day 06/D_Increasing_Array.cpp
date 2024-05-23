/* title: Week 9 - D_Increasing_Array.cpp */
/* created: 2024-05-23 22:37:47 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, ans = 0;
    cin >> n;

    vector<ll> v(n);
    cin >> v[0];
    for(ll i=1; i<n; i++) {
        cin >> v[i];
        if(v[i-1] > v[i]) {
            ans += abs(v[i-1]-v[i]);
            v[i] = v[i-1];
        }
    }
    cout << ans;     
    return 0;
}