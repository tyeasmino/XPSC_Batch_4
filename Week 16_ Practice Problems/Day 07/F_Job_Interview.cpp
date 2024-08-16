/* title: Week 11 - F_Job_Interview.cpp */
/* created: 2024-08-16 13:53:20 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, candidate;
vector<ll> a(2e5), b(2e5);
map<vector<ll>, ll> dp;

ll select(ll i, ll n, ll m) {
    if(i==candidate) return 0;
    if(dp.find({i, n, m}) != dp.end()) {
        return dp[{i, n, m}];
    } 
    if((n>0 && a[i]>b[i]) || m==0) {
        return dp[{i, n, m}] = a[i] + select(i+1, n-1, m);
    }
    return dp[{i, n, m}] = b[i] + select(i+1, n, m-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {        
        cin >> n >> m;
        candidate=n+m+1;
        
        for(ll i=0; i<candidate; i++) cin >> a[i];
        for(ll i=0; i<candidate; i++) cin >> b[i];

        ll ans = 0;
        dp.clear();

        for(ll i=0; i<candidate; i++) {
            cout << ans + select(i+1, n, m) << " ";
            if((n>0 && a[i]>b[i]) || m==0) {
                ans += a[i];
                n--;
            } else {
                ans += b[i];
                m--;
            }
        }
        cout << endl;
    }
    
    return 0;
}