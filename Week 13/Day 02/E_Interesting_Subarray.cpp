/* title: Week 10 - E_Interesting_Subarray.cpp */
/* created: 2024-06-23 21:36:27 */
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
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];

        bool flag = 1;
        for(ll i=1; i<n; i++) {
            if(abs(a[i] - a[i-1]) >= 2) {
                cout << "YES" << endl;
                cout << i << " " << i+1 << endl;
                flag = 0;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
    }
    
    return 0;
}