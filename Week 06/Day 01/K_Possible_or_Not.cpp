/* title: Week 4 - K_Possible_or_Not.cpp */
/* created: 2024-04-28 23:17:43 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // supermask
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, ans = -1;
        cin >> n >> k;

        ll a[n];
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if((a[i] & k) == k) {
                ans &= a[i];
            }  
        } 
        
        if(ans == k) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}