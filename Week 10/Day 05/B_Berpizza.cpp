/* title: Week 10SZ - B_Berpizza.cpp */
/* created: 2024-05-29 03:17:21 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    ll n, m, pos=0, i=0;
    priority_queue<pair<ll, ll>> pq;
    vector<bool> vb;

    while (t--)
    {
        cin >> n;
        if(n == 1) {
            cin >> m;
            pq.push({m, -pos});
            vb.push_back(0);
            pos++;
        } else if(n == 2) {
            while (vb[i]) i++;
            vb[i] = 1;
            cout << i+1 << " ";            
        } else if(n == 3) {
            while (vb[-pq.top().second]) pq.pop();
            cout << -pq.top().second + 1 << " ";
            vb[-pq.top().second] = 1;
            pq.pop();
        }
    }
    
    return 0;
}