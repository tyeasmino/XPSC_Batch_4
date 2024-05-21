/* title: Week 9 - A_Playlist.cpp */
/* created: 2024-05-21 22:58:14 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    set<ll> st;
    ll l = 0, r = 0, ans = 0;
    while (r<n) 
    {
        while (r<n && !st.count(v[r]))
        { 
            st.insert(v[r]);
            ans = max(ans, r-l+1);
            r++;
        }
        while (st.count(v[r]))
        {
            st.erase(v[l]);
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}