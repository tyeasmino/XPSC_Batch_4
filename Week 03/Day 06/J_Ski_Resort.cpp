/* created: 2024-04-03 11:28:43 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, q, i, ans=0, resort=0;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for(i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] <= q) resort++;
            else {
                if(resort >= k) {
                    ans += (resort - k + 1) * (resort - k + 2) / 2;
                }
                resort = 0;
            }
        }
        if(resort >= k) {
            ans += (resort - k + 1) * (resort - k + 2) / 2;
        }

        cout << ans << endl;
    }
    
    return 0;
}