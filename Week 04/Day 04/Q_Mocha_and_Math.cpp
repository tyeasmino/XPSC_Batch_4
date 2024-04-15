/* title: Week 4 - Q_Mocha_and_Math.cpp */
/* created: 2024-04-14 23:18:55 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, ans=INT_MAX, data;
        cin >> n;

        for(i=0; i<n; i++) {
            cin >> data;
            ans &= data;
        }

        cout << ans << endl;
    }
    
    return 0;
}