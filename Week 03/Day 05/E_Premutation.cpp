/* created: 2024-04-02 11:13:13 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, j;
        cin >> n;

        ll a[n][n-1];
        for(i=0; i<n; i++) {
            for(j=0; j<n-1; j++) {
                cin >> a[i][j];
            }
        }

        map<ll, ll> mp;
        for(i=0; i<n; i++) mp[a[i][0]]++;

        ll maximumNumber = -1e18;
        for(auto m : mp) {
            if(m.second > maximumNumber) maximumNumber = m.first;
        }


        cout << maximumNumber << " ";
        for(i=0; i<n; i++) {
            if(a[i][0] != maximumNumber) {
                for(j=0; j<n-1; j++) {
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}