/* title: Week 9 - M_MEX_Game_1.cpp */
/* created: 2024-08-18 01:46:07 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++) {
            ll x; cin >> x;
            mp[x]++;
        }

        ll mex; 
        vector<ll> bob;
        for(ll i=0; i<=n+1; i++) {
            if(mp[i]==0) {
                mex=i;
                break;
            } else if(mp[i] == 1) {
                bob.push_back(i);
            } 
        }

        if(bob.size()==0 || bob.size()==1) {
            cout << mex << endl;
        } else cout << bob[1] << endl;
    }
    
    return 0;
}