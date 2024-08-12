/* title: Week 13 - K_Great_Sequence.cpp */
/* created: 2024-08-12 21:22:54 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;
        
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            if(a[i] != -1) {
                ll find = a[i] * x;
                ll flag = -1, l=i+1, r=n-1;

                while (l <= r) {
                    ll mid = (l+r) / 2;
                    if(a[mid] == find) {
                        flag = mid;
                        r = mid - 1;
                    } 

                    if(a[mid] < find) l = mid + 1;
                    else r = mid - 1;
                }
                
                if (flag == -1) ans++;
                else a[flag] = -1; 
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}