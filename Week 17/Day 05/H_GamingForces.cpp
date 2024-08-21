/* title: Week Practice Problems - H_GamingForces.cpp */
/* created: 2024-08-21 23:42:56 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, x, none=0;
        cin >> n;

        for(ll i=0; i<n; i++) {
            cin >> x;
            if(x == 1) none++;
        }
        cout << n - (none/2) << endl;
    }
    
    return 0;
}