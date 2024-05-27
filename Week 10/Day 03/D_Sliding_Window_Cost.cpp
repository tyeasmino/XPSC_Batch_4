/* title: Week 10 - D_Sliding_Window_Cost.cpp */
/* created: 2024-05-27 11:15:21 */
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
    
    ll n, k, cost = 0;
    cin >> n >> k;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    pbdse<ll> p;
    for(ll i=0; i<k; i++) p.insert(v[i]);
    ll oldData = *p.find_by_order(((k+1) / 2) -1);
    for(ll i=0; i<k; i++) cost += abs(v[i]-oldData);
    cout << cost;

    for(ll i=0; i<n-k; i++) {
        p.erase(p.find_by_order(p.order_of_key(v[i])));
        p.insert(v[i+k]);
        ll newData = *p.find_by_order(((k+1) / 2) -1);
        cost += abs(newData - v[i+k]) - abs(oldData - v[i]);
        if(k % 2 == 0) cost -= newData - oldData;
        oldData = newData;
        cout << " " << cost;
    }
    return 0;
}