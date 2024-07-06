/* title: Week 14 - H_Queue_Sort.cpp */
/* created: 2024-07-05 12:36:01 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, idx;
        cin >> n;

        vector<ll> v(n);
        ll minimum = 1e18;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            minimum = min(minimum, v[i]);
        }

        for(ll i=0; i<n; i++) {
            if(v[i] == minimum) {
                idx = i;
                break;
            }
        }

        if(is_sorted(v.begin()+idx, v.end())) cout << idx << endl; 
        else cout << -1 << endl;
    }
    
    return 0;
}