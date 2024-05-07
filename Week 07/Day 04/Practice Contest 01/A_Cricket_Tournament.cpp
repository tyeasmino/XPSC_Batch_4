/* title: Week 7 - A_Cricket_Tournament.cpp */
/* created: 2024-05-07 21:05:18 */
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
        if(a > b) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}