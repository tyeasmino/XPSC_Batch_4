/* title: Week 14 - L_Rudolf_and_the_Another_Competition.cpp */
/* created: 2024-07-09 21:57:02 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<pair<pair<ll, ll>, ll>> ans;

        for(ll i=0; i<n; i++) {
            vector<ll> a(m);
            for(ll j=0; j<m; j++) cin >> a[j];
            sort(a.begin(), a.end());

            ll sum=0, cnt=0, per=0;
            for(ll j=0; j<m; j++) {
                if(sum+a[j] <= h) {
                    sum += a[j];
                    cnt++;
                    per += sum;
                } else {
                    break;
                }
            }

            ans.push_back({{cnt, -per}, -(i+1)});
        }

        sort(ans.begin(), ans.end(), greater<pair<pair<ll,ll>, ll>>());

        for(ll i=0; i<n; i++) {
            if(ans[i].second == -1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}