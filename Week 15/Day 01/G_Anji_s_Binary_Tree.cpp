/* title: Week 14 - G_Anji_s_Binary_Tree.cpp */
/* created: 2024-07-05 21:26:52 */
#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<vector<ll>> g(n+1);
        vector<char> s(n+1);

        for(ll i=1; i<=n; i++) cin >> s[i];

        for(ll i=1; i<=n; i++) {
            ll l, r;
            cin >> l >> r;

            g[i].push_back(l);
            g[i].push_back(r);
        }

        vector<ll> dp(n+1, -1);
        stack<pair<ll, ll>> st;
        st.push({1, 0});

        ll minimum = 1e9;
        while (!st.empty()) {
            auto [node, steps] = st.top();
            st.pop();

            if(g[node][0] == 0 && g[node][1]==0) {
                minimum = min(minimum, steps);
                continue;
            }

            ll left = g[node][0];
            if(left != 0) {
                if(dp[left]==-1) {
                    dp[left] = steps + (s[node] == 'U' || s[node] == 'R' ? 1 : 0);
                    st.push({left, dp[left]});
                }
            }

            ll right = g[node][1];
            if(right != 0) {
                if(dp[right]==-1) {
                    dp[right] = steps + (s[node] == 'U' || s[node] == 'L' ? 1 : 0);
                    st.push({right, dp[right]});
                }
            }
        }
        cout << minimum << endl;
    }
    
    return 0;
}