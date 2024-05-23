/* title: Week 9 - E_Permutations.cpp */
/* created: 2024-05-23 22:51:05 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    if(n == 1) cout << 1;
    else if(n < 4) cout << "NO SOLUTION";
    else { 
        for(ll i=2; i<=n; i+=2) cout << i << " ";
        for(ll i=1; i<=n; i+=2) cout << i << " ";
    }
    return 0;
}