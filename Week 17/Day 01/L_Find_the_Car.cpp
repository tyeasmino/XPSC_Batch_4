/* title: Week 9 - L_Find_the_Car.cpp */
/* created: 2024-08-17 22:57:58 */
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
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(k+1), b(k+1);
        for(ll i=1; i<=k; i++) cin >> a[i];
        for(ll i=1; i<=k; i++) cin >> b[i];

        while (q--) {
            ll d;
            cin >> d;
            ll d_prev =lower_bound(a.begin(), a.end(), d) - a.begin();
            if(a[d_prev] == d) cout << b[d_prev] << " ";
            else {
                ll upper = a[d_prev] - a[d_prev-1];
                ll lower = b[d_prev] - b[d_prev-1];
                ll result = b[d_prev-1]+ (d-a[d_prev-1])*lower / upper;
                cout << result << " ";
            }
        }
        cout << endl;         
    }
    
    return 0;
}