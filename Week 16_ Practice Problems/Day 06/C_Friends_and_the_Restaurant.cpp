/* title: Week 11 - C_Friends_and_the_Restaurant.cpp */
/* created: 2024-08-15 02:10:56 */
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
        ll n, x;
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) {
            cin >> x;
            a[i] = -x;
        }

        for(ll i=0; i<n; i++) {
            cin >> x;
            a[i] += x;
        }

        sort(a.begin(), a.end(), greater<ll>());

        ll ans = 0, l=0, r=n-1;
        while (l < r)
        {
            if(a[l]>=0 && a[r] >=0) {
                ans++;
                l++;
                r--;
            } else if(a[l] < 0 && a[r] < 0) {
                break;
            } else if(a[l] >= 0) {
                if(a[l] + a[r] >= 0) {
                    ans++;
                    l++;
                    r--;
                } else {
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}