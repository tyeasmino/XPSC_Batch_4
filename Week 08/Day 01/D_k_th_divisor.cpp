/* title: Week 8 - D_k_th_divisor.cpp */
/* created: 2024-05-11 11:14:31 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    vector<ll> divisors;
    for(ll i=1; i*i<=n; i++) {
        if(n % i == 0) {
            divisors.push_back(i);
            if((n/i) != i) divisors.push_back(n/i);
        } 
    }

    sort(divisors.begin(), divisors.end());

    if(k <= divisors.size()) cout << divisors[k-1] << endl;
    else cout << "-1\n";
    
    return 0;
}