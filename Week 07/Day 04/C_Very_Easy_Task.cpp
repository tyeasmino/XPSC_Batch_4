/* title: Week 6 - C_Very_Easy_Task.cpp */
/* created: 2024-05-07 04:19:03 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](ll mid) {
        if(mid < min(x,y)) return false;
        ll cnt = 1;
        mid = mid - min(x, y);
        cnt += mid / x + mid / y;
        return cnt >= n;
    };

    ll l=0, r=n*max(x, y), mid, ans;
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
    cout << ans; 
    return 0;
}