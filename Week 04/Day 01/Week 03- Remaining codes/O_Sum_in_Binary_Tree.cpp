/* created: 2024-04-05 14:47:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, sum =0;
        cin >> n;

        for(ll i=n; i>=1; ) {
            sum += i;
            i = i / 2;        
        }
        cout << sum << endl;
    }
    
    return 0;
}