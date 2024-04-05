/* created: 2024-04-05 02:37:13 */
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

        vector<ll> a(n), b(n), c(n);
        vector<pair<ll, ll>> maxa, maxb, maxc; 
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            maxa.push_back(make_pair(a[i], i));
        }

        for(ll i=0; i<n; i++) {
            cin >> b[i];
            maxb.push_back(make_pair(b[i], i));
        }

        for(ll i=0; i<n; i++) {
            cin >> c[i];
            maxc.push_back(make_pair(c[i], i));
        }

        sort(maxa.begin(), maxa.end(), greater<>());
        sort(maxb.begin(), maxb.end(), greater<>());
        sort(maxc.begin(), maxc.end(), greater<>());

        for(ll i=0; i<3; i++) {
            for(ll j=0; j<3; j++) {
                for(ll k=0; k<3; k++) {
                    if(maxa[i].second != maxb[j].second && maxb[j].second != maxc[k].second && maxc[k].second != maxa[i].second) {
                        ans = max(ans, maxa[i].first + maxb[j].first + maxc[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}