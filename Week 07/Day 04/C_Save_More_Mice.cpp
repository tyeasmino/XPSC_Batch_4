/* title: Week 6 - C_Save_More_Mice.cpp */
/* created: 2024-05-07 02:32:09 */
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
        ll n, mouse;
        cin >> n >> mouse;
        vector<ll> v(mouse);
        for(ll i=0; i<mouse; i++) cin >> v[i];
        sort(v.begin(), v.end(), greater<ll>());

        ll Now_pos = 0, total = 0;
        for(ll i=0; i<mouse; i++) {
            if(v[i] > Now_pos) {
                Now_pos += n - v[i];
                total++;
            }
            else break;
        }
        cout << total << endl;
    }
    
    return 0;
}