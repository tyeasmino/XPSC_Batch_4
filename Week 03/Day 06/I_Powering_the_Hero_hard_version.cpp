/* created: 2024-04-03 11:28:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, ans=0;
        cin >> n;

        vector<ll> a(n);
        // for(i=0; i<n; i++) cin >> a[i];
        priority_queue<ll> pq;

        for(i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == 0 && !pq.empty()) {
                ans += pq.top();
                pq.pop();
            } 
            else {
                pq.push(a[i]);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}