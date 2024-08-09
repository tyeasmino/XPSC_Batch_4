/* title: Week 13 - A_Quests.cpp */
/* created: 2024-08-08 10:37:15 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool possible(ll n, ll c, ll d, ll k, vector<ll> a) {
    if(k == 0) return (a[0]*d >= c);

    ll sum =0, collection=0;
    if(k>=n) for(ll i=0; i<n; i++) sum += a[i];
    else for(ll i=0; i<k; i++) sum += a[i];

    ll repeats = d/k;
    collection = repeats*sum;
    ll rem = d%k; 

    if(rem >= n) for(ll i=0; i<n; i++) collection += a[i];
    else for(ll i=0; i<rem; i++) collection += a[i];

    return (collection >= c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, c, d, possibileMax = 0;
        cin >> n >> c >> d;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<ll>());
        for(ll i=0; i<min(n, d); i++) possibileMax += a[i];

        if(possibileMax >= c) {
            cout << "Infinity" << endl;
            continue;
        } 

        ll ans =-1, low=0, high=1e18;
        while (low <= high) 
        {
            ll mid = low + (high-low)/2;
            if(possible(n, c, d, mid+1, a)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        (ans == -1) ? cout << "Impossible" << endl : cout << ans << endl;
    }
    
    return 0;
}
 
        
       
      