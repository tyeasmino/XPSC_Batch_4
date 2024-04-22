/* title: Week 4 - E_And_Then_There_Were_K.cpp */
/* created: 2024-04-19 23:41:03 */
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
        cout << (1 << msb) - 1 << endl;
    }
    
    return 0;
}