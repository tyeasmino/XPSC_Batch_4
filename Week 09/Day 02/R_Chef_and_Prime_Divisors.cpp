/* title: Week 8 - R_Chef_and_Prime_Divisors.cpp */
/* created: 2024-05-19 00:55:37 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;  
        
        while (1)
        {
            ll ab = __gcd(a, b);
            if(ab == 1) break;
            b /= ab;
        }

        if(b == 1) cout << "Yes\n";
        else cout << "No\n";
     
    }
    
    return 0;
}