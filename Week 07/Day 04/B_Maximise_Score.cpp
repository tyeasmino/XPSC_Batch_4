/* title: Week 7 - B_Maximise_Score.cpp */
/* created: 2024-05-07 05:22:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];

        ll possibleMinimum=abs(a[0] - a[1]);
        for(ll i=1; i<n-1; i++) {
            ll minimum = max(abs(a[i] - a[i-1]), abs(a[i]-a[i+1]));
            possibleMinimum = min(minimum, possibleMinimum);
        }

        cout << min(possibleMinimum, abs(a[n-1] - a[n-2])) << endl;
    }
    
    return 0;
}