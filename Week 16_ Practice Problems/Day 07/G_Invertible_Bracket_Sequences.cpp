/* title: Week 11 - G_Invertible_Bracket_Sequences.cpp */
/* created: 2024-08-16 15:51:46 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N=2e5+1;
vector<ll> values(N);
ll brackets[N][26];

void direct() {
    values[1] = 0;
    for(ll i=2; i<=N; i++) {
        values[i] = values[i/2] + 1;
    }
}

void build(vector<ll> &a) {
    ll asize = a.size();
    for(ll i=0; i<asize; i++) brackets[i][0] = a[i];
    
    for(ll j=1; j<=25; j++) {
        for(ll i=0; i+(1<<j) <= asize; i++) {
            brackets[i][j] = max(brackets[i][j-1], brackets[i+(1<<(j-1))][j-1]);
        }
    }
} 

ll findMax(ll l, ll r) {
    ll j= values[r-l+1];
    ll maxi = max(brackets[l][j], brackets[r-(1<<j)+1][j]);
    return maxi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    direct();
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        ll nsize = s.size();
        vector<ll> a(nsize+1);
        for(ll i=1; i<=nsize; i++) {
            a[i] = a[i-1] + (s[i-1]=='(' ? 1 : -1);
        }

        build(a);
        ll ans = 0;
        map<ll, deque<ll>> mp;
        for(ll i=0; i<=nsize; i++) {
            deque<ll> &now = mp[a[i]];
            while (now.size()) {
                ll pos = now[0];
                ll maxi = findMax(pos, i);
                if(a[i] - (maxi - a[i]) < 0) {
                    now.pop_front();
                } 
                else {
                    break;
                }
            }

            ans += now.size();
            mp[a[i]].push_back(i);            
        }
        cout << ans << endl;
    }
    
    return 0;
}