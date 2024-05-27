/* title: Week 10 - E_Maximum_Crossings_Easy_Version.cpp */
/* created: 2024-05-27 22:49:17 */
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	ll t;
	cin >> t;
	while (t--) { 
		ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        pbdsge<ll> st;
        ll ans = 0;
        
        map<ll, ll> mp;
        for(ll i=0;i<n;i++) {
            st.insert(a[i]);
            ans += st.order_of_key(a[i]) + mp[a[i]];
            mp[a[i]]++;
        }
        cout << ans << "\n";
	}
	 
	return 0;
}