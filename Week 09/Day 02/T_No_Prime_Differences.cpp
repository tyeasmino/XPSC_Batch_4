/* title: Week 8 - T_No_Prime_Differences.cpp */
/* created: 2024-05-19 03:02:19 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll isPrime(ll n) {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        for(ll i=1; i<n; i += 2) {
            for(ll j=1; j<=m; j++) {
                cout << i*m + j << " ";
            }
            cout << endl;
        }

        for(ll i=0; i<n; i += 2) {
            for(ll j=1; j<=m; j++) {
                cout << i*m + j << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}