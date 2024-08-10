/* title: Week 13 - M_Not_Dividing.cpp */
/* created: 2024-08-10 22:15:14 */
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

        vector<ll> a(n);
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == 1) a[i]++;
        }

        cout << a[0] << " ";
        for(ll i=1; i<n; i++) {
            if(a[i] % a[i-1] == 0) a[i]++;
            cout << a[i] << " ";
        } 
        cout << endl;
    }
    
    return 0;
}