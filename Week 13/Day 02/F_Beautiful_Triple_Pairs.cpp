/* title: Week 10 - F_Beautiful_Triple_Pairs.cpp */
/* created: 2024-06-23 23:36:04 */
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
        ll n, x, y, z, p, q, r; 
        cin >> n;
        ll v[n];
        for(ll i=0; i<n; i++) cin >> v[i];

        map<pair<ll, ll>, ll> ab;
        map<pair<ll, ll>, ll> bc;
        map<pair<ll, ll>, ll> ca;

        map<vector<ll>, ll> abv;
        map<vector<ll>, ll> bcv;
        map<vector<ll>, ll> cav;

        ll ans = 0;
        for(ll i=0; i<n-2; i++) {
            ll a = v[i], b = v[i+1], c=v[i+2];
            ab[make_pair(a, b)]++, bc[make_pair(b, c)]++, ca[make_pair(c, a)]++;
            x = ab[make_pair(a, b)];            
            y = bc[make_pair(b, c)];            
            z = ca[make_pair(c, a)];

            abv[{a, b, c}]++, bcv[{b, c, a}]++, cav[{c, a, b}]++;
            p = abv[{a, b, c}];            
            q = bcv[{b, c, a}];
            r = cav[{c, a, b}];

            ans += x+y+z-p-q-r;
        }
        cout << ans << endl;
    }
    return 0;
}