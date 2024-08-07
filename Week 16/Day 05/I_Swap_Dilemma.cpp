/* title: Week 14 - I_Swap_Dilemma.cpp */
/* created: 2024-08-05 22:17:10 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

ll inversion_count(vector<ll> &a) {
    indexed_set st;
    ll inversion = 0;
    for(ll i=0; i<a.size(); i++) {
        ll id = st.order_of_key(a[i]+1);
        inversion += st.size() - id;
        st.insert(a[i]);
    }
    return inversion;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        bool flag = 1;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        multiset<ll> sta(a.begin(), a.end()), stb(b.begin(), b.end());  
        if(sta != stb || inversion_count(a)%2 != inversion_count(b)%2) {
            flag = 0;
        } 
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}