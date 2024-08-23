/* title: Week Practice Problems - I_Find_the_Different_Ones.cpp */
/* created: 2024-08-21 23:48:38 */
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
        vector<ll> a(n+1), diff(n+1,0);
        for(ll i=1; i<=n; i++) cin >> a[i];

        for(ll i=2; i<=n; i++) {
            if(a[i] != a[i-1]) {
                ll lastsimilar = i-1;
                while (diff[lastsimilar] == 0) 
                {
                    diff[lastsimilar] = i;
                    lastsimilar--;
                }
            }
        }
        diff[n] = -1;

        // for(ll i=1; i<=n; i++) cout << diff[i] << " ";
        // cout << endl;
        
        ll q;
        cin >> q;
        while (q--) {
            ll l, r;
            cin >> l >> r;

            if(diff[l] <= r && diff[l] != 0) {
                cout << l << " " << diff[l] << endl;
            } else {
                cout << -1 << " " << -1 << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}