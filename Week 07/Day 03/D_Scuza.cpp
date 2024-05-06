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

        ll v[n], prefixSum[n];
        pair<ll, ll> myPair[n];

        cin >> v[0];
        prefixSum[0] = v[0];
        myPair[0].first = v[0];
        myPair[0].second = 0;

        for(ll i=1; i<n; i++) {
            cin >> v[i];
            prefixSum[i] = prefixSum[i-1]+v[i];
            myPair[i].first = v[i];
            myPair[i].second = i;
        } 

        vector<ll> maxArray(n);
        maxArray[n-1] = v[n-1];
        for(ll i=n-2; i>=0; i--) {
            maxArray[i] = max(maxArray[i+1], v[i]);
        }

        // sort(v, v+n);  
        for(ll i=0; i<q; i++) {
            ll x; cin >> x;
            auto it = lower_bound(maxArray.begin(), maxArray.end(), x);
            ll maxL= it - maxArray.begin();
            
            if(maxL == n) cout << prefixSum[n-1] << " ";
            else if(maxL == 0) cout << 0 << " ";
            else cout << prefixSum[maxL - 1] << " ";
        }
        cout << endl;
    }
    return 0;
}