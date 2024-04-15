/* title: Week 4 - P_Roof_Construction.cpp */
/* created: 2024-04-15 00:10:23 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll start = log2(n-1); 
        start = (1 << start);
        for(ll i=n-1; i>= start; i--) cout << i << " ";
        for(ll i=0; i<start; i++) cout << i << " ";
        cout << endl;
    }    
    return 0;
}