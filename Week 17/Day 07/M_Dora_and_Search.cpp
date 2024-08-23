/* title: Week Practice Problems  - M_Dora_and_Search.cpp */
/* created: 2024-08-23 22:49:12 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >>t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n+1);
        set<ll> st;
        for(ll i=1; i<=n; i++) {
            cin >> a[i];
            st.insert(i);
        }

        ll l=1, r=n;
        while (1) {
            bool flag = 0; 
            ll min = *st.begin(), max = *st.rbegin();
            if(min == a[l] || max == a[l]) {
                st.erase(a[l]);
                l++;
                flag = 1;
            } else if(min == a[r] || max == a[r]) {
                st.erase(a[r]);
                r--;
                flag = 1;
            }

            if(flag == 0 || l>r) break; 
        }
        
        if(l>r) cout << -1 << endl;
        else cout << l << " " << r << endl;
    }
    
    return 0;
}