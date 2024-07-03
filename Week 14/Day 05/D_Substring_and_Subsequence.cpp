/* title: Week 14 - D_Substring_and_Subsequence.cpp */
/* created: 2024-07-03 23:21:37 */
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
        string a, b;
        cin >> a >> b;

        ll ans = a.length() + b.length();
        for(ll i=0; i<b.length(); i++) {
            ll k = i;
            for(ll j=0; j<a.length() && k<b.length(); j++) {
                if(a[j] == b[k]) k++;
            }
            ll need = i+a.length()+b.length()-k;
            ans = min(ans, need);
        }
        cout << ans << endl;
    }
    
    return 0;
}