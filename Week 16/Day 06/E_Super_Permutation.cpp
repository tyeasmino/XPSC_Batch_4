/* title: Week 15 - E_Super_Permutation.cpp */
/* created: 2024-08-08 00:09:23 */
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

        if(n==1) {
            cout << 1 << endl;
            continue;
        } 
        else if(n % 2 == 1) cout << -1 << endl;
        else {
            ll even=1;
            for(ll odd=n; odd>0; odd--) {
                if(odd%2==1) {
                    cout << even << " ";
                    even += 2;
                }
                else cout << odd << " ";
            }
            cout << endl;
        } 
    }
    
    return 0;
}