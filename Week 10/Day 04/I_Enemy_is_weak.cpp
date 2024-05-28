/* title: Week 10 - I_Enemy_is_weak.cpp */
/* created: 2024-05-29 01:45:56 */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds; 
using namespace std;

template<typename T> using pbdsl = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using pbdsle = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using pbdsg = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using pbdsge = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    ll n;
    cin >> n;
    vector<ll> v(n);  
    pbdsl<ll> pl;
    pbdsge<ll> pge;
    for(ll i=0; i<n; i++) {
        ll x; cin >> x;
        v[i] = x; 
        if(i != 0){
            pl.insert(x);  
        }
    } 

    ll ans = 0;
    for(ll i=0; i<n; i++) {
        ll x = pge.order_of_key(v[i]);
        ll y = pl.order_of_key(v[i]);
        ans += x * y;    
        pge.insert(v[i]);
        pl.erase(v[i]);
    }
    cout << ans << endl;
    
    return 0;
}