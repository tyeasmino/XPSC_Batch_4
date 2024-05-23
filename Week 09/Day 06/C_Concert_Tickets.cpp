/* title: Week 9 - C_Concert_Tickets.cpp */
/* created: 2024-05-23 22:12:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, p;
    cin >> n >> p;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    
    vector<ll> can(p);
    for(ll i=0; i<p; i++) cin >> can[i];

    multiset<ll> ms;
    for(auto it : v) ms.insert(it);

    for(auto it: can) { 
        auto find = ms.upper_bound(it);
        if(find == ms.begin()) cout << -1 << endl;
        else {
            find--;
            ms.erase(find);
            cout << *find << endl;
        }
    }
    return 0;
}