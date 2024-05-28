/* title: Week 10SZ - A_Vlad_and_an_Odd_Ordering.cpp */
/* created: 2024-05-29 02:47:51 */
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
        ll n, k;
        cin >> n >> k;

        for(ll i=1;i<=n;i=i*2) {
            ll x = n / i;
            ll y = (x+1) / 2;
            if(k <= y) {
                ll odd = (2*k) - 1;
                cout << odd*i << endl;
                break;
            }
            else k = k - y;
        }
    }
    return 0;
}