/* title: Week 13 - J_Virus.cpp */
/* created: 2024-08-11 10:41:53 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(m);
        for(ll i=0; i<m; i++) cin >> a[i];
        sort(a.begin(), a.end());
        priority_queue<ll> pq;

        ll f=n - (a[m-1]-a[0])-1;
        pq.push(f);

        for(ll i=1; i<m; i++) pq.push(a[i]-a[i-1]-1);
        ll ans=0, infected=0;
        while (!pq.empty()) {
            ll targetBlock=pq.top();
            pq.pop();
            if(2*infected < targetBlock) {
                ll saved = targetBlock - (2*infected);
                if(saved>1) ans += saved-1;
                else ans += saved;
            } 
            infected += 2;
        }
        cout << n - ans << endl;
    }
    
    return 0;
}