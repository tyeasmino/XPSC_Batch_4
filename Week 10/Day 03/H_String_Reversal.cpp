/* title: Week 10 - H_String_Reversal.cpp */
/* created: 2024-05-27 10:08:01 */
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
    
    ll n, ans =0;
    cin >> n;

    string s, r;
    cin >> s;

    r = s;
    reverse(r.begin(), r.end());

    map<char, vector<ll>> pos_s, pos_r;
    for(ll i=0; i<n; i++) {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<ll> permutation(n);
    for(char ch='a'; ch <= 'z'; ch++) {
        for(ll i=0; i<pos_s[ch].size(); i++) {
            permutation[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<ll> p;
    for(ll i=n-1; i>=0; i--) {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout << ans << endl; 
    return 0;
}