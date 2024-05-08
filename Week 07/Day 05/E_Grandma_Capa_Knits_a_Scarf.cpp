/* title: Week 7 - E_Grandma_Capa_Knits_a_Scarf.cpp */
/* created: 2024-05-08 23:43:42 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n; cin >> n;
        string s; cin >> s;

        set<char> st;
        for(ll i=0; i<n; i++) st.insert(s[i]);

        vector<ll> ans(26, 1e18);
        for(char c : st) {
            ll l=0, r=n-1, cnt =0;
            while (l <= r) {
                if(s[l] == s[r]) {
                    l++; 
                    r--;
                } else {
                    if(s[l] == c) {
                        l++;
                        cnt++;
                    } else if(s[r] == c) {
                        r--;
                        cnt++;
                    } else {
                        cnt=-1;
                        break;
                    }
                }
            }
            if(cnt != -1) ans[c - 'a'] = cnt; 
        }

        sort(ans.begin(), ans.end());
        if(ans[0] == 1e18) cout << "-1\n";
        else cout << ans[0] << "\n";
    }
    
    return 0;
}