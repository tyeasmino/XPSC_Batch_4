/* title: Week 8 - G_Bash_s_Big_Day.cpp */
/* created: 2024-05-17 02:41:13 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, ans=0;
    cin >> n;

    ll  arr[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(arr[i] != 1) ans = max(ans, mp[arr[i]]);
    }

    if(n == 1) cout << 1;
    else {
        for(ll i = 0; i < n; i++) {
            for(ll j=2; j <= sqrtl(arr[i]); j++) {
                if(arr[i] % j == 0) {
                    mp[j]++;
                    ans = max(ans, mp[j]);

                    if(arr[i] / j != j) {
                        mp[arr[i] / j]++;
                        ans = max(ans, mp[arr[i] / j]);
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
