/* title: Week 7 - C_Minimize_Distance.cpp */
/* created: 2024-05-09 02:32:21 */
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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        vector<ll> positive, negative;
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] < 0) negative.push_back(a[i] * (-1));
            else if(a[i] > 0) positive.push_back(a[i]);
        }
        
        sort(negative.begin(), negative.end());
        sort(positive.begin(), positive.end());

        ll ans = 0, x = 0, y = 0;
        if(positive.empty() == false) {
            if(positive.size() < k) {
                x = positive[positive.size()-1];
                ans += x;
            } else {
                x = positive[positive.size()-1];
                for(ll i=0; i<positive.size(); i++) {
                    if(i==positive.size()-1) ans += positive[i];
                    else if((positive.size()-i-1) % k == 0) ans += positive[i] * 2;
                }
            }
        }
        if(negative.empty() == false) {
            if(negative.size() < k) {
                y = negative[negative.size()-1];
                ans += y;
            } else {
                y = negative[negative.size()-1];
                for(ll i=0; i<negative.size(); i++) {
                    if(i==negative.size()-1) ans += negative[i];
                    else if((negative.size()-i-1) % k == 0) ans += negative[i] * 2;
                }
            }
        }

        ans += min(x, y);
        cout << ans << endl;
    }    
    return 0;
}