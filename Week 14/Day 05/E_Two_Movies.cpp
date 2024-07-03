/* title: Week 14 - E_Two_Movies.cpp */
/* created: 2024-07-03 23:29:25 */
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
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        ll x=0, y=0;
        for(ll i=0; i<n; i++) {
            if(a[i] != b[i]) {
                if(a[i] > b[i]) x += a[i];
                else y += b[i];
            }
        }
        for(ll i=0; i<n; i++) {
            if(a[i]==1 && b[i]==1) {
                if(x < y) x++;
                else y++;
            }
            else if(a[i]==-1 && b[i]==-1) {
                if(x < y) y--;
                else x--;
            }
        }
        cout << min(x, y) << endl;
    }
    
    return 0;
}