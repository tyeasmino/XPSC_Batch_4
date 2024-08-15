/* title: Week 11 - C_Removing_Smallest_Multiples.cpp */
/* created: 2024-08-15 03:03:49 */
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


        vector<char> a(n+1, 'z');
        for(ll i=1; i<=n; i++) {
            if(s[i]=='1') a[i]='n';
        }

        ll ans = 0;
        for(ll i=1; i<=n; i++) {
            for(ll j=i; j<=n; j=i+j) {
                if(a[j] == 'z') {
                    a[j] = 'o';
                    ans += i;
                } 
                else if(a[j] == 'n') break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}