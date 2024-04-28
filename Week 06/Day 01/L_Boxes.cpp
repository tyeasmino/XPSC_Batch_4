/* title: Week 4 - L_Boxes.cpp */
/* created: 2024-04-28 22:28:26 */
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
        ll n; 
        cin >> n;

        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];

        sort(a, a+n, greater<ll>());
        multiset<ll> ms;

        for(ll i=0; i<n; i++) {
            if(ms.size() == 0) ms.insert(a[i]);
            else {
                ll x = *(--ms.end());
                if(a[i] <= x) {
                    ms.erase(--ms.end());
                    ms.insert(x^a[i]);
                } else {
                    ms.insert(a[i]);
                }
            } 
        }
        cout << ms.size() << endl;
    }
    
    return 0;
}