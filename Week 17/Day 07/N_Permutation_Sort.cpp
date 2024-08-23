/* title: Week Practice Problems - N_Permutation_Sort.cpp */
/* created: 2024-08-23 22:06:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, cnt=0;
        cin >> n;
        vector<ll> a(n+1);
        for(ll i=1; i<=n; i++) {
            cin >> a[i];
            if(a[i] != i) cnt++;
        }

        if(cnt==0) cout << 0 << endl;
        else if(a[1]==1 || a[n]==n) cout << 1 << endl;
        else if(a[1]==n && a[n]==1) cout << 3 << endl;
        else cout << 2 << endl;
    }
    
    return 0;
}