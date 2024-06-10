/* title: Week 12 - D_Districts_Connection.cpp */
/* created: 2024-06-09 22:29:11 */
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
        ll n, unique=0;
        cin >> n;

        vector<ll> a(n); 
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == a[0]) unique++;
        } 

        if(unique == n) cout << "NO\n";
        else {
            cout << "YES\n";
            ll index=-1;
            for(ll i=0; i<n; i++) {
                if(a[i] != a[0]) {
                    index = i;
                    break;
                }
            }

            for(ll i=1; i<n; i++) {
                if(a[i] != a[0]) cout << 1 << " " << i+1 << endl; 
                else cout << index+1 << " " << i+1 << endl;
            }
        }        
    }
    
    return 0;
}