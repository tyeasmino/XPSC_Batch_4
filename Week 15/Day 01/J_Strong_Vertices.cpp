/* title: Week 14 - J_Strong_Vertices.cpp */
/* created: 2024-07-06 10:12:24 */
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
        ll n;
        cin >> n;
        ll a[n], b[n], c;

        for(ll i=0; i<n; i++) cin >> a[i]; 
        for(ll i=0; i<n; i++) cin >> b[i]; 

        vector<ll> v;
        ll cmax = -1e18;
        for(ll i=0; i<n; i++) {
            c = a[i] - b[i];
            if(c > cmax) {
                cmax = c;
                v.clear();
                v.push_back(i+1);
            } else if(c == cmax) {
                v.push_back(i+1);
            }
        }

        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for(ll i=0; i<v.size(); i++) 
            cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}