/* title: Week 16 - F_Ice_Cream_Balls.cpp */
/* created: 2024-08-04 02:10:21 */
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
        ll n;
        cin >> n;
        ll ans, l=1, r=1e10, mid;
        while (l <= r) 
        {
            mid=(l+r)/2;
            ll k=mid*(mid-1)/2;
            if(k==n) {
                ans = mid;
                break;
            } 
            if(k<n) {
                ans=mid;
                l=mid+1;
            } else r=mid-1;
        }
        
        ll c=ans*(ans-1)/2;
        c = n - c;
        ans += c;
        cout << ans << endl;
    }
    
    return 0;
}