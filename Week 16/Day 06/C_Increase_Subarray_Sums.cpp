/* title: Week 15 - C_Increase_Subarray_Sums.cpp */
/* created: 2024-08-05 23:49:28 */
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
        ll n, x;
        cin >> n >> x;
        ll a[n+1];
        for(ll i=0; i<n; i++) cin >> a[i];

        vector<ll> v;
        ll temp = 0;
        for(ll i=0; i<n; i++) {
            temp += a[i];
            ll mx = temp;
            ll sum = temp;

            ll k=0;
            for(ll j=i+1; j<n; j++) {
                sum += a[j];
                sum -= a[k];
                k++;
                mx = max(mx, sum);
            }
            v.push_back(mx);
        }

        for(ll i=0; i<=n; i++) {
            ll mx = 0;
            for(ll j=0; j<v.size(); j++) {
                ll sum;
                if(i > j+1) sum = v[j]+x*(j+1);
                else sum = v[j]+x*i;
                mx = max(mx, sum);
            } 
            cout << mx << " ";
        }
        cout << endl;
    }
    
    return 0;
}