/* title: Week 7 - M_Deja_Vu.cpp */
/* created: 2024-05-10 20:01:48 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, q1;
        cin >> n >> q1;
        ll v[n], q[q1];
        for(ll i=0; i<n; i++) cin >> v[i];  
        for(ll i=0; i<q1; i++) cin >> q[i];  

        set<ll> s;
        for(ll i=0; i<q1; i++) {
            if(s.count(q[i])) continue;
            s.insert(q[i]);
            for(ll j=0; j<n; j++) {
                if(v[j] % (1 << q[i]) == 0) {
                    v[j] += (1 << (q[i]-1));
                }
            }
        }
        
        for(ll i=0; i<n; i++) cout << v[i] << " ";  
        cout << endl;
    }
    
    return 0;
}