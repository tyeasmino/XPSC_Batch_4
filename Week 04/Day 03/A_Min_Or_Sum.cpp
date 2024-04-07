/* title: Week  - A_Min_Or_Sum.cpp */
/* created: 2024-04-07 23:29:05 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, ans = 0; 
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            ans |= a[i];
        }
        cout << ans << endl;
    }    
    return 0;
}