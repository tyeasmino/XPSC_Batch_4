/* title: Week 14 - F_Smithing_Skill.cpp */
/* created: 2024-07-05 12:47:54 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6+5;
typedef pair<ll, ll> pii;
ll n, m, a[N], b[N], c[N];
vector<pii> all;
map<ll, ll> dp;

ll solve(ll cur) {
    if(dp.count(cur)) return dp[cur];

    ll low=0, high=all.size()-1, idx=-1;
    while(low <= high) {
        ll mid = (low+high)/2;
        if(all[mid].second<=cur) {
            idx = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if(idx == -1) return dp[cur]=0;

    ll diff = all[idx].first;
    ll need = all[idx].second;

    ll smithing = (cur-need)/diff+1;
    ll due = cur - smithing * diff;
    ll ans = smithing*2 + solve(due);
    return dp[cur] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    ll n, m;
    cin >> n >> m;

    for(ll i=0; i<n; i++) cin >> a[i];    
    for(ll i=0; i<n; i++) {
        cin >> b[i];
        all.push_back({a[i]-b[i], a[i]});
    }    

    for(ll i=0; i<m; i++) cin >> c[i];

    sort(all.begin(), all.end());
    vector<pii> tmp;
    for(ll i=0; i<n; i++) {
        if(tmp.empty()) {
            tmp.push_back(all[i]);
            continue;
        }
        if(tmp.back().second > all[i].second) {
            tmp.push_back(all[i]);
        }
    }

    all = tmp;

    ll ans = 0;
    for(ll i=0; i<m; i++) {
        ll q = c[i];
        ans += solve(q);
    }
    cout << ans << endl;
    return 0;
}