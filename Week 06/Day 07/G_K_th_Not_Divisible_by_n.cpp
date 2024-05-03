/* title: Week 6 - G_K_th_Not_Divisible_by_n.cpp */
/* created: 2024-05-03 12:37:29 */
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
        ll n, k;
        cin >> n >> k;

        auto ok = [&](ll mid) {
            return (mid - (mid/n) >= k);
        };

        ll l=1, r=2e9, mid, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if(ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}