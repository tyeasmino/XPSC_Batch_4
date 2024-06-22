/* title: Week 12 - I_Morning_Jogging.cpp */
/* created: 2024-06-22 22:36:18 */
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
        ll n, m;
        cin >> n >> m;
        vector<ll> v[n+1], ans[n+1];
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                ll x; 
                cin >> x;
                v[i].push_back(x);
            }
        }

        for(ll i=0; i<n; i++) {
            sort(v[i].begin(), v[i].end());
        }

        for(ll i=0; i<m; i++) {
            ll min = 1e18, minIndex;
            for(ll j=0; j<n; j++) {
                if(v[j][0] < min) {
                    min = v[j][0];
                    minIndex = j;
                }
            }

            for(ll j=0; j<n; j++) {
                if(j == minIndex) {
                    ans[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                } else {
                    ans[j].push_back(v[j][v[j].size()-1]);
                    v[j].pop_back();
                }
            }
        }

        for(ll i=0; i<n; i++) {
            for(ll j=0; j<ans[i].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}