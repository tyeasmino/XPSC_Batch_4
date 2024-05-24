/* title: Week 10 - pbds.cpp */
/* created: 2024-05-24 22:40:55 */
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
    
    ll n;
    cin >> n;

    pbdse<ll> p;
    // pbdse<ll> pe;
    for(ll i=1; i<=n; i++) {
        ll x;
        cin >> x;
        p.insert(x); 
        // pe.insert(x);
    }

    ll r = p.order_of_key(4); // how many value is strictly less than the given number
    cout << r << "\n";

    auto y = p.find_by_order(3);
    cout << *y << "\n";


    for(auto val : p) {
        cout << val << " ";
    }
    // cout << endl;
    // for(auto val : pe) {
    //     cout << val << " ";
    // }

    // input: 
    // 6
    // 4 2 9 4 1 3

    // expected output:
    // 1 2 3 4 9
    // 1 2 3 4 4 9

    // exception in erase function in set p.erase(4)
    // erase in pbds multiset is not possible using erase buildit function. 

    // set using as multiset using pair
    // pbds<pair<ll, ll>> p;  
    // for(ll i=1; i<=n; i++) {
    //     ll x;
    //     cin >> x;
    //     p.insert({x, i});  
    // }

    // p.erase({4,1});
    // for(auto [x, y] : p) {
    //     cout << x << " " << y << "\n";
    // } 


    return 0;
}