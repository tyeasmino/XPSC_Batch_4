/* title: Week 11 - H_Torn_Lucky_Ticket.cpp */
/* created: 2024-08-16 17:49:52 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll r, ans;
map<pair<ll,ll>, ll> freq;
bool asize(string &x, string &y) {
    return x.size() < y.size();
}

void check(string c) {
    for(ll l=1; l<=r; l++) {
        if((l+r) % 2 != 0) continue;
        ll mid = (l+r) / 2;
        ll req=0;
        for(ll i=0; i<mid; i++) req += (c[i]-'0');
        for(ll i=mid; i<r; i++) req -= (c[i]-'0');

        if(req >= 0) ans += freq[{l,req}];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        ll n;
        cin >> n;
        ans = n;

        vector<string> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end(), asize);
        
        for(auto c : a) {
            r = c.size();
            check(c);            
            reverse(c.begin(), c.end());
            check(c); 

            ll sum = 0;
            for(ll i=0; i<r; i++) {
                sum += (c[i] - '0');
            }
            freq[{r, sum}]++;
        }
        cout << ans << endl;

    return 0;
}