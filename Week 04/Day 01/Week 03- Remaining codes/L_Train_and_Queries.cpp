/* created: 2024-04-05 02:58:13 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n); 

        map<ll, pair<ll, ll>> datalist;
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            if(!datalist.count(v[i])) {
                datalist[v[i]].first = i, datalist[v[i]].second = i;
            } 
            else {
                datalist[v[i]].second = i;
            }
        }   

        while (q--)
        {
            ll a, b;
            cin >> a >> b;

            if(!datalist.count(a) || !datalist.count(b) || datalist[a].first > datalist[b].second) {
                cout << "NO\n"; 
            } 
            else {
                cout << "YES\n";
            } 
        }
        

    }
    
    return 0;
}