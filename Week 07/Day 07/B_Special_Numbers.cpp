/* title: Week 7 - B_Special_Numbers.cpp */
/* created: 2024-05-10 13:06:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, ans = 0, increment = 1;
        cin >> n >> k;
        while(k) {
            if(k & 1) {
                ans = (ans + increment) % mod;
            }
            k = k >> 1;
            increment = (increment * n) % mod; 
        }
         
        cout << ans % mod << endl;
    }
    
    return 0;
}