/* title: Week 8 - J_Joty_and_Chocolate.cpp */
/* created: 2024-05-14 21:49:24 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a, b)) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll common = n / lcm(a, b);
    ll na = n / a - common;
    ll nb = n / b - common;  

    ll ans = na * p + nb * q + common * max(p, q);
    cout << ans ;
    return 0;
}