/* title: Week 11 - A_Boats_Competition.cpp */
/* created: 2024-08-13 01:30:52 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n; 
        cin >> n;
        vector<ll> a(n+1);
        for(ll i=1; i<=n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll ans = 0;
        for(ll total=1; total<=100; total++) {
            ll cnt=0, i=1, j=n;
            while(i<j) {
                if(a[i]+a[j] > total) j--;
                else if(a[i]+a[j] < total) i++;
                else {
                    cnt++;
                    i++;
                    j--;
                }
            }
            ans = max(ans, cnt);            
        }
        cout << ans << endl;
    }
    
    return 0;
}