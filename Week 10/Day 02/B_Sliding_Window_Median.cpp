/* title: Week 10 - B_Sliding_Window_Median.cpp */
/* created: 2024-05-26 22:45:36 */
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
    
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    ll l=0, r=0;
    pbds<pair<ll, ll>> p;
    while (r < n)
    {
        p.insert({v[r], r});
        if(r-l+1 == k) {
            ll index = k / 2;
            if(k % 2 == 0) index--;

            auto it = p.find_by_order(index);
            cout << it->first << " ";
            p.erase({v[l], l});
            l++;
        } 
        r++;
    }
    
    return 0;
}