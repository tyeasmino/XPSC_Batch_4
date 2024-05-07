/* title: Week 7 - D_Not_Prime_Permutation.cpp */
/* created: 2024-05-07 22:03:39 */
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
        ll n, posone, posthree; 
        cin >> n;
        
        ll v[n];
        for(ll i=0; i<n; i++) {
            cin >> v[i];
            if(v[i] == 1) v[i] = 3;
            else if(v[i] == 3) v[i] = 1;
        } 

        if(n < 3) cout << "-1";
        else {
            for(ll i=0; i<n; i++) {                
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}