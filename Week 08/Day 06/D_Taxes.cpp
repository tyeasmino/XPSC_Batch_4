/* title: Week 8 - D_Taxes.cpp */
/* created: 2024-05-16 21:12:32 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n) {
    if (n == 1) return false;

    for(ll i=2; i*i <=n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    if (is_prime(n)) cout << 1;
    else if (n % 2 == 0) cout << 2;
    else {
        if(is_prime(n-2)) cout << 2;
        else cout << 3;
    } 
    return 0;
}