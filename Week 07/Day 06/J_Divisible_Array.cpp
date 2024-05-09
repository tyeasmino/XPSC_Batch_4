/* title: Week 7 - J_Divisible_Array.cpp */
/* created: 2024-05-09 22:59:51 */
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
        ll n;
        cin >> n; 
        for(ll i = 1; i<=n; i++) { 
            cout << i*2 << " "; 
        }
        cout << endl;
    }
    
    return 0;
}