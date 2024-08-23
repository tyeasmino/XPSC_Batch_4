/* title: Week Practice Problems - J_Choose_the_Different_Ones.cpp */
/* created: 2024-08-22 01:50:12 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, k, x;
        cin >> n >> m >> k;
        map<ll, ll>mp; 

        for(ll i=1; i<=n; i++) {
            cin >> x;
            if(x<=k) mp[x] = 1;
        }

        for(ll i=1; i<=m; i++) {
            cin >> x;
            if(x<=k) {
                if(mp[x] == 1) mp[x] = -1; 
                else if(mp[x] == 0) mp[x] = 2; 
            }
        }

        ll a=k/2, b=k-a;
        for(ll i=1; i<=k; i++) {
            if(mp[i] == 0) a=-1;
            if(mp[i] == 1) a--;
            if(mp[i] == 2) b--;
        }

        if(a>-1 && b>-1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
    return 0;
}