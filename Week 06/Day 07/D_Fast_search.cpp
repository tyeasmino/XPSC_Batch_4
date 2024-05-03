/* title: Week 5 - D_Fast_search.cpp */
/* created: 2024-04-28 01:24:54 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end()); 

    ll t;
    cin >> t;

    while (t--) {
        ll gl, gr;
        cin >> gl >> gr;

        auto it = lower_bound(v.begin(), v.end(), gl);
        ll minimum = it - v.begin(); 

        it = upper_bound(v.begin(), v.end(), gr);
        ll maximum = it - v.begin();
        cout << maximum - minimum << " "; 
    }
    
    return 0;
}