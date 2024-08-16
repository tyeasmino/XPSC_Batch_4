/* title: Week 11 - J_Array_Game.cpp */
/* created: 2024-08-16 20:05:41 */
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

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i]; 
        sort(a.begin(), a.end());

        ll ans = a[0];
        if(k==1) {
            for(ll i=1; i<n; i++) {
                ans = min(ans, (a[i]-a[i-1]));
            }
        }
        else if(k==2) {
            for(ll i=0; i<n-1; i++) {
                for(ll j=i+1; j<n; j++) {
                    ll minus = a[j]-a[i];
                    ans = min(ans, minus);

                    ll pos=-1, l=0, r=n-1;
                    while (l <= r) {
                        ll mid = (l+r)/2;
                        if(a[mid] >= minus) {
                            pos = mid;
                            r = mid - 1;
                        } else {
                            l = mid + 1;
                        }
                    }

                    if(pos == -1) ans = min(ans, minus-a[n-1]);
                    else ans = min(ans, a[pos]-minus);

                    if(pos == 0) ans = min(ans,a[pos]-minus);
                    else ans = min(ans, minus-a[pos-1]);
                }
            }
        }
        else ans = 0;
        
        cout << ans << endl;
    }
    
    return 0;
}