/* title: Week 12 - J_Increasing_Sequence.cpp */
/* created: 2024-06-09 20:03:28 */
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
        ll n, ans = 1; 
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(i==0) {
                if(a[i] == ans) ans++;
                continue;
            }
            ans++;
            if(a[i] == ans) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}