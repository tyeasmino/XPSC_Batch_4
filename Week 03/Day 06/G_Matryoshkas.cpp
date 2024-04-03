/* created: 2024-04-03 11:27:50 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, sets=0;
        cin >> n;

        vector<ll> a(n);
        map<ll, int> mp;
        for(i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());
        for(i=0; i<n; i++) {
            if(mp[a[i]] > 0) {
                sets++;
                while (mp[a[i]] > 0)
                {
                    mp[a[i]]--;
                    a[i]++;
                }
            }
        }
        cout << sets << endl;
    }
    
    return 0;
}