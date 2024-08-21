/* title: Week Practice Problems - E_Make_Majority.cpp */
/* created: 2024-08-21 01:13:20 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, one=0, zero=0;
        cin >> n;

        string s;
        cin >> s;
        s = '1'+s;
        for(ll i=1; i<=n; i++) {
            if(s[i]=='1') one++;
            else if(s[i]=='0' && s[i-1]=='1') zero++;
        }

        if(one > zero) cout << "Yes" << endl;
        else cout << "No" << endl;
    }    
    return 0;
}