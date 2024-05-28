/* title: Week 10 - G_Greetings.cpp */
/* created: 2024-05-28 10:19:57 */ 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds; 
using namespace std;

template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using pbdse = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n;
        vector<pair<ll, ll>> v;  
        for(ll i=0; i<n; i++) {
            cin >> x >> y;
            v.push_back({x, y}); 
        }

        sort(v.begin(), v.end()); 
        pbds<ll> p;

        ll ans = 0;
        for(ll i=0; i<n; i++) {
            ans += p.size() - p.order_of_key(v[i].second);
            p.insert(v[i].second);            
        }
        cout << ans << endl;
    }
    return 0;
}