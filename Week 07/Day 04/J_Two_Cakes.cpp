/* title: Week 6 - J_Two_Cakes.cpp */
/* created: 2024-05-07 04:30:16 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, a, b;
    cin >> n >> a >> b;

    ll l=1, r=min(a, b), ans = 0;
    while (l <= r)
    {
        ll mid = (r + l) / 2;
        if(a / mid + b / mid >= n) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans; 
    return 0;
}