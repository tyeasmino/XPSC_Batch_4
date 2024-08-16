/* title: Week 11 - I_Klever_Permutation.cpp */
/* created: 2024-08-16 19:48:21 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll max=n, min=1;
        vector<ll> p(n);
        for(ll i=1; i<=k; i++) {
            for(ll j=i; j<=n; j=j+k) {
                if(i%2) p[j-1] = min++;
                else p[j-1] = max--;
            }
        }

        for(ll i : p) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}