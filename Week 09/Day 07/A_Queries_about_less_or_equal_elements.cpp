/* title: Week 10 - A_Queries_about_less_or_equal_elements.cpp */
/* created: 2024-05-24 22:40:39 */
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
    
    ll n, m;
    cin >> n >> m;
 
    pbdse<ll> pe;
    for(ll i=0; i<n; i++) {
        ll x;
        cin >> x; 
        pe.insert(x);
    }

    for(ll i=0; i<m; i++) {
        ll x;
        cin >> x;
        cout << pe.order_of_key(x+1) << " ";
    }
    return 0;
}