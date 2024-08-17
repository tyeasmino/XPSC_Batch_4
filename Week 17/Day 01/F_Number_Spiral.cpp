/* title: Week 9 - F_Number_Spiral.cpp */
/* created: 2024-08-16 20:57:36 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;

        ll ans;
        if(x < y) {
            if(y%2==1) {
                ans = y*y-x+1;
            } else {
                ans = (y-1)*(y-1)+x;
            }
        } else if(x%2 == 1) {
            ans = (x-1)*(x-1)+y;
        } else {
            ans = x*x-y+1;
        }
        cout << ans << endl;
    }
    
    return 0;
}