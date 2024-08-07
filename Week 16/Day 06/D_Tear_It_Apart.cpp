/* title: Week 15 - D_Tear_It_Apart.cpp */
/* created: 2024-08-07 23:40:59 */
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
        string s;
        cin >> s;

        ll ssize = s.size();
        ll ans = ssize;

        for(ll i=0; i<26; i++) {
            char ch = 'a'+i;
            ll len = 0, result = 0;
            for(ll j=0; j<ssize; j++) {
                if(s[j]==ch) {
                    result = max(result, len);
                    len = 0;
                } else len++;
            }
            result = max(result, len);
            ans = min(ans, result);
        }

        ll cnt=0;
        while (ans > 0) {
            ans /= 2;
            cnt++;
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}