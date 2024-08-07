/* title: Week 15 - B_Mark_and_His_Unfinished_Essay.cpp */
/* created: 2024-08-05 23:49:23 */
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
        ll n, c, q;
        cin >> n >> c >> q;

        string s;
        cin >> s;

        vector<pair<ll, ll>> ops(c), segs(c);
        ll curr_len = n;
        for(ll i=0; i<c; i++) {
            ll l, r;
            cin >> l >> r;
            ops[i] = {l, r};
            segs[i] = {curr_len+1, curr_len+r-l+1};
            curr_len = segs[i].second;
        }
        
        while (q--)
        {
            ll index;
            cin >> index;

            if(index<=n) {
                cout << s[index-1] << endl;
                continue;
            }
            for(ll i=c-1; i>=0; i--) {
                if(index>=segs[i].first && index<=segs[i].second) {
                    index = (ops[i].first)+(index-segs[i].first);
                }
            }
            cout << s[index-1] << endl;
        }        
    }
    
    return 0;
}