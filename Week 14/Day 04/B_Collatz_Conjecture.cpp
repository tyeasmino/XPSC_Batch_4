/* title: Week 14 - B_Collatz_Conjecture.cpp */
/* created: 2024-07-02 22:43:21 */
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
        ll x, y, k;
        cin >> x >> y >> k;

        while (x > 1) 
        { 
            ll y1 = y-(x%y);
            if(y1>=k) {
                x+=k;
                k=0;
            } else {
                k-=y1;
                x+=y1;
            }
            while (x%y == 0) x /= y;
            if(k <= 0) break;
        }

        if(k > 0) {
            k = k % (y-1);
            x += k;
            while (x % y == 0) x /= y;           
        }        
        cout << x << endl;
    }
    return 0;
}