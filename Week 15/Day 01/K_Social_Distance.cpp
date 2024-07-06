/* title: Week 14 - K_Social_Distance.cpp */
/* created: 2024-07-06 11:21:42 */
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
        ll n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        vector<ll> v;
        for(ll i=0; i<n; i++) {
            if(s[i]=='1') v.push_back(i+1);
        }

        ll cnt = 0;
        if(v.size() == 0) {
            for(ll i=1; i<=n; i+=k+1) {
                cnt++;
            }
        } else {
            for(ll i=v[v.size()-1]+k+1; i<=n; i+=k+1) cnt++;
            for(ll i=1; i<=v[0]-k-1; i+=k+1) cnt++;

            ll first, second, diff;
            for(ll i=0; i<v.size()-1; i++) {
                first=v[i];
                second=v[i+1];
                for(ll j=first+k+1; j<=second-k-1; j+=k+1) cnt++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}