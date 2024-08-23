/* title: Week 17 - A_Make_it_White.cpp */
/* created: 2024-08-23 23:07:36 */
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
        string s;
        cin >> s;
        s = '.'+s;

        ll f=0,e=0;
        for(ll i=1; i<=n; i++) {
            if(s[i]=='B' && f==0) f=i; 
            if(s[i]=='B' && f!=0) e=i; 
        }
        cout << e-f+1 << endl;
    }
    
    return 0;
}