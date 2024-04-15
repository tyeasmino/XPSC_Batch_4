/* title: Week 4 - R_Absolute_Maximization.cpp */
/* created: 2024-04-14 22:45:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, data, i, max=0, min=INT_MAX;
        cin >> n;
 
        for(i=0; i<n; i++) {
            cin >> data;
            max |= data;
            min &= data;
        }

        cout << max - min << endl;
    }
    
    return 0;
}