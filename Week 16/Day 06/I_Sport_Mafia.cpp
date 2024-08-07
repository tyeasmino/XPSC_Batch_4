/* title: Week 15 - I_Sport_Mafia.cpp */
/* created: 2024-08-08 02:11:12 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    ll i=0, j=n; 
    while (i <= j) 
    {
        ll a = i + (j-i) / 2;
        ll x = n-a, y = x+1;
        if((x*y) /2 - a == k) {
            cout << a;
            return 0;
        } else if((x*y)/2 - a < k) {
            j = a - 1;
        } else i = a + 1;
    }
    
    return 0;
}