/* title: Week 4 - I_Xorry_1.cpp */
/* created: 2024-04-20 02:23:40 */
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

        ll msb = log2(n);
        ll b = 1 << msb;
        ll a = n - b; 
        cout << a << " " << b << endl;
    }
    
    return 0;
}