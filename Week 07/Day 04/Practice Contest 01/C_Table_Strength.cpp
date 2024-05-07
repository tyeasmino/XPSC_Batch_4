/* title: Week 7 - C_Table_Strength.cpp */
/* created: 2024-05-07 21:27:56 */
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
        ll n, ans=0; 
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for(ll i=0; i<n; i++) ans = max(ans, a[i] * (n-i));

        cout << ans << endl;
    }    
    return 0;
}