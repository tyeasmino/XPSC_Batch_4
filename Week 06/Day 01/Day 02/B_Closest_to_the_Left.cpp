/* title: Week 5 - B_Closest_to_the_Left.cpp */
/* created: 2024-04-29 02:21:49 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];

    while (k--) {
        ll check, mid;
        cin >> check;

        ll l=0, r=n-1, ans = -1;
        while (l <= r)
        {
            mid = (l + r ) / 2;
            if(check >= a[mid]) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }
    
    return 0;
}