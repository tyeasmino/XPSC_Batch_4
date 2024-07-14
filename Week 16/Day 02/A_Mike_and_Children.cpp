/* title: Week 16 - A_Mike_and_Children.cpp */
/* created: 2024-07-14 23:11:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll a[n], freq[N]={0};
    for(ll i=0; i<n; i++) cin >> a[i];
    ll ans = -1e18;

    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            freq[a[i]+a[j]]++;
            ans = max(ans, freq[a[i]+a[j]]);
        }
    }
    cout << ans << endl;
    return 0;
}