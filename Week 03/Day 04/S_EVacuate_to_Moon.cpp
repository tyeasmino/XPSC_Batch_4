/* created: 2024-04-01 03:03:27 */
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--) 
    {
        ll n, m, watt;
        cin >> n >> m >> watt;

        vector<ll> v_car(n);
        for(ll i=0; i<n; i++) cin >> v_car[i];
        sort(v_car.begin(), v_car.end(), greater<ll>());

        vector<ll> v_power(m);
        for(ll i=0; i<m; i++) {
            int x;
            cin >> x;
            v_power[i] = x*watt;
        }
        sort(v_power.begin(), v_power.end(), greater<ll>());

        // for(ll i=0; i<m; i++) cout << v_power[i] << " ";
        // cout << endl;
 
        // if(n==1) {
        //     ll ans = 0; 
        //     for(ll i=0; i<m; i++) {
        //         if(v_power[i] <= v_car[0] && v_power[i] > ans) ans = v_power[i];
        //     }
        //     cout << ans << "\n";
        // } 
        // else if(m==1) {
        //     ll ans = 0;
        //     for(ll i=0; i<n; i++) {
        //         if(v_car[i] <= v_power[0]) ans = max(ans, v_car[i]);
        //     }
        //     cout << ans << "\n";
        // } 
        // else {
            ll ans;
            if(n <= m) {
                ans = 0;
                for(ll i=0; i<n; i++) {
                    ans += min(v_car[i], v_power[i]);
                }
            } else if(n > m) {
                ans = 0;
                for(ll i=0; i<m; i++) {
                    ans += min(v_car[i], v_power[i]);
                }
            }
            cout << ans << endl;
        // }

        
    }
    
    return 0;
}