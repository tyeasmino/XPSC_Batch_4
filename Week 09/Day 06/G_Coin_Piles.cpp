/* title: Week 9 - G_Coin_Piles.cpp */
/* created: 2024-05-23 23:21:53 */
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

        if(2*a >= b && (2*a - b) % 3 == 0 && 2*b >= a && (2*b - a) % 3 == 0) cout << "YES\n";
        else cout << "NO\n"; 
    }
    
    return 0;
}