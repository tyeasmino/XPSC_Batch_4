/* title: Week 4 - C_Playing_with_OR.cpp */
/* created: 2024-04-19 23:24:17 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l=0, r=0, ans = 0;

        while (r<n)
        {
            if(r-l+1 == k) {
                for(ll j=l; j<=r; j++) {
                    if(a[j] % 2 == 1) {
                        ans++;
                        break;
                    }
                }
                l++;
            }
            r++;
        }
        cout << ans << endl;        
    }
    
    return 0;
}