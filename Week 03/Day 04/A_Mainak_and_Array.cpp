/* created: 2024-04-01 23:29:30 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, output = 0;
        cin >> n;
 
        vector<ll> v(n);
        for(i=0; i<n; i++) cin >> v[i];

        for(i=0; i<n-1; i++) {
            output = max(output, v[n-1]-v[i]);
        }

        for(i=1; i<n; i++) {
            output = max(output, v[i]-v[0]);
        }

        for(i=0; i<n-1; i++) {
            output = max(output, v[i]-v[i+1]);
        }

        cout << output << endl;
    }
    
    return 0;
}