/* title: Week 4 - J_Xorry_2.cpp */
/* created: 2024-05-03 11:17:40 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n; 
        cin >> n;

        ll i=31, countOne = 0, countZero = 0;
        while (i >= 0)
        {
            if(n & (1 << i)) countOne++; 
            if(countOne == 2) break;
            i--;
        }
        
        while (i >= 0)
        {
            if((n & (1 << i)) == 0) countZero++;  
            i--;
        }

        cout << (1 << countZero) << endl;
    }
    
    return 0;
}
 