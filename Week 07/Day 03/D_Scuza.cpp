/* title: Week 6 - D_Scuza.cpp */
/* created: 2024-05-05 20:40:27 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; cin >> t;
    while (t--)
    {
        ll n, q; cin >> n >> q;

        vector<ll> v(n+1, 0), prefixSum(n+2, 0), ans(q);
        for(ll i=1; i<=n; i++) {
            cin >> v[i];
            prefixSum[i] = prefixSum[i-1] + v[i];
        }
        
        vector<pair<ll, ll>> myPair(q);
        for(ll i=0; i<q; i++) {
            cin >> myPair[i].first;
            myPair[i].second = i;                     
        }

        sort(myPair.begin(), myPair.end());  

        ll maxL = 0;
        for(ll i=0; i<q; i++) { 
            while (true)
            {
                if(maxL == n or v[maxL+1] > myPair[i].first) break;
                maxL++;
            }
            ans[myPair[i].second] = prefixSum[maxL];                  
        }        

        for(ll i=0; i<q; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}