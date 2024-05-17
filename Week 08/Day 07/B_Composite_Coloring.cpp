/* title: Week 8 - B_Composite_Coloring.cpp */
/* created: 2024-05-17 16:27:00 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n], ans[n];
        for(ll i=0; i<n; i++) {
            cin >> a[i]; 
            ans[i] = -1; 
        } 
        
        ll color = 1;
        for(ll p : prime) {
            bool flag = 0;
            for(ll i=0; i<n; i++) {
                if(ans[i] != -1) continue;
                if(a[i] % p) continue;
                
                flag = 1;
                ans[i] = color;
            }
            if(flag) color++;
        }

        cout << color - 1 << endl;
        for(ll i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }    
    return 0;
}