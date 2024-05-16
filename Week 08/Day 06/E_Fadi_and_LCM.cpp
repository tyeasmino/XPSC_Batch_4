/* title: Week 8 - E_Fadi_and_LCM.cpp */
/* created: 2024-05-16 22:29:52 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll rootN = sqrtl(n);
    for(ll i=rootN; i>=1; i--) {
        if(n % i == 0 && __gcd(i, n/i) == 1) {
            cout << i << " " << n/i;
            break;
        } 
    }
    return 0;
}