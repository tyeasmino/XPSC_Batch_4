/* title: Week 8 - A_Bachgold_Problem.cpp */
/* created: 2024-05-16 21:40:43 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, ans = 0;
    cin >> n;

    if(n % 2 == 0) {
        ans = n / 2;
        cout << ans << endl;
    } else {
        ans = (n-3) / 2;
        cout << ans+1 << endl;
        cout << 3 << " ";
    }
    for(ll i=0; i<ans; i++) cout << 2 << " ";
        
    return 0;
}