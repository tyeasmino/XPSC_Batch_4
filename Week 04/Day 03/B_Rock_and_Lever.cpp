/* title: Week 4 - B_Rock_and_Lever.cpp */
/* created: 2024-04-07 23:33:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans=0;
        cin >> n;

        vector<ll> a(n);
        map<ll, ll> mp;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            ll pairs = 0;
            while (a[i] > 0) 
            {
                pairs++;
                a[i] >>= 1;
            }
            
            if(mp.count(pairs-1) > 0) {
                ans += mp[pairs-1];
            }

            mp[pairs - 1]++;
        }
        cout << ans << endl;
    }
    
    return 0;
}