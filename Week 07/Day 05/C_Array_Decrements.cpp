/* title: Week 7 - C_Array_Decrements.cpp */
/* created: 2024-05-08 02:09:52 */
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
        ll n, diff = -1e9, zero=-1e9; 
        cin >> n; 
        ll a[n], b[n];
        for(ll i=0; i<n; i++) cin >> a[i];                
        for(ll i=0; i<n; i++) cin >> b[i]; 

        bool flag = 1;        
        for(ll i=0; i<n; i++) {
            if(b[i] > a[i]) {
                flag = 0;
                break;
            }
            if(b[i] != 0) {
                if(diff == -1e9) diff = a[i] - b[i];
             
                else {
                    if(a[i] - b[i] != diff) {
                        flag = 0; 
                        break;
                    }
                }
            } else {
                zero = max(zero, a[i]-b[i]);
            }
        }

        if(!flag) {
            cout << "NO\n";
            continue;
        }

        (diff == -1e9 || zero <= diff) ? cout << "YES\n" : cout << "NO\n";

    }
    
    return 0;
}