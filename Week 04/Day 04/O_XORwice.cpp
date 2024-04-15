/* title: Week 4 - O_XORwice.cpp */
/* created: 2024-04-15 00:29:27 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        cout << (a ^ b) << endl;
    }
    
    return 0;
}