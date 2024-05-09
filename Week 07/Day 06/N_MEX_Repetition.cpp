/* title: Week 7 - N_MEX_Repetition.cpp */
/* created: 2024-05-09 22:20:40 */
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
        ll n, k;
        cin >> n >> k;

        long long total = (n*(n+1))/2;
        long long totalWithoutMex = 0;
        vector<ll> v;
        for(ll i=0; i<n; i++) {
            ll x; cin >> x;
            v.push_back(x);
            totalWithoutMex += v[i]; 
        }

        v.push_back(total - totalWithoutMex);
        k = k % (n+1);
        for(ll i=0; i<n; i++) {
            ll x = (i-k+n+1) % (n+1);
            cout << v[x] << " ";
        }
        cout << endl;
    }
    return 0;
}