/* title: Week 13 - H_Make_a_Power_of_Two.cpp */
/* created: 2024-08-09 10:41:58 */

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
        ll n;
        cin >> n;

        if( (n&(n-1)) == 0) {
            cout << 0 << endl;
            continue;
        }

        vector<ll> v;
        for(ll i=0; i<=60; i++) {
            ll x = (1LL<<i);
            v.push_back(x);
        }

        string s=to_string(n);
        ll ans=1e18, sz=s.size();

        for(ll i1=0; i1<v.size(); i1++) {
            ll x=v[i1];
            string c = to_string(x);
            ll szc = c.size();

            ll res=0, p=0, q=0;
            while (p<sz && q<szc)
            {
                if(s[p] == c[q]) {
                    p++;
                    q++;
                } else {
                    res++;
                    p++;
                }
            }
            
            if(p==sz && q!=szc) {
                res += szc-q;
            } else if(p!=sz && q==szc) {
                res += sz - p;
            }
            ans = min(ans, res);
        }
        cout << ans << endl;
    }
    return 0;
}