/* title: Week 8 - U_GCD_Partition.cpp */
/* created: 2024-05-19 03:48:23 */
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
        ll n, ans = 0;
        cin >> n;

        vector<ll> v(n), prefixSum(n);
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            if(i == 0) prefixSum[i] = v[i];
            else prefixSum[i] = prefixSum[i-1] + v[i];
        }
    
        for(ll i=1; i<n; i++) {
            ll start = prefixSum[i-1];
            ll end = prefixSum[n-1];

            ans = max(ans, __gcd(start, end - start));
        }
        cout << ans << endl;
    }
    
    return 0;
}