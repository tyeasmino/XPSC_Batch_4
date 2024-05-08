/* title: Week 7 - D_Paprika_and_Permutation.cpp */
/* created: 2024-05-08 11:42:31 */
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
        ll v[n];
        map<ll, ll> mp;
        vector<ll> a;

        for(ll i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
          
            if(mp[v[i]] > 1 and v[i] <= n) a.push_back(v[i]);
            else if(v[i] > n) a.push_back(v[i]);
        }

        ll ans = a.size();
        sort(a.begin(), a.end(), greater<ll>());
        for(ll i=0; i<n; i++) {
            if(mp[i+1] == 0) {
                ll x = a.back();
                a.pop_back();

                ll y = i+1;
                if(x % (x-y) == y) continue;
                else {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}