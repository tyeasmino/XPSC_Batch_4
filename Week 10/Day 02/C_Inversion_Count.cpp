/* title: Week 10 - C_Inversion_Count.cpp */
/* created: 2024-05-26 23:09:52 */
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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        ll ans = 0;
        pbds<ll> p;
        for(ll i=n-1; i>=0; i--) {
            ans += p.order_of_key(v[i]);
            p.insert(v[i]);
        }
        cout << ans << endl;
    }    
    return 0;
}