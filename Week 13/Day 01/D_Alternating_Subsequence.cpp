/* title: Week 10 - D_Alternating_Subsequence.cpp */
/* created: 2024-06-22 23:42:50 */
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
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];

        for(ll i=0; i<n; i++) {
            ll j = i;
            ll data = a[i];

            while (j < n && ((a[i]>0 && a[j]>0) || (a[i]<0 && a[j]<0)))
            {
                data = max(data, a[j]);
                j++;
            }

            i = j-1;
            ans += data;
        }

        cout << ans << endl;
    }
    
    return 0;
}