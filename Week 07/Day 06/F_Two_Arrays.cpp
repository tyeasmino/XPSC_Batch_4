/* title: Week 7 - F_Two_Arrays.cpp */
/* created: 2024-05-09 02:13:59 */
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
        ll n, flag=1;
        cin >> n;
        ll a[n], b[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n);

        for(ll i=0; i<n; i++) {
            ll need = b[i] - a[i];
            if(need != 0 and need != 1) {
                flag = 0;
            } 
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}