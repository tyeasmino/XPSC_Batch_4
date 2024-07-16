/* title: Week 16 - C_Palindromic_Numbers.cpp */
/* created: 2024-07-16 22:13:09 */
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

        string s, ans;
        cin >> s;

        if(s[0] != '9') {
            for(ll i=0; i<n; i++) {
                ll x=s[i]-'0';
                ll y = 9 - x;
                ans += y+'0'; 
            }
        } else {
            ll y, c = 0;
            for(ll i=n-1; i>=0; i--) {
                ll x=s[i]-'0';
                x += c;
                if(x > 1) {
                    y = 11 - x;
                    c = 1;
                } else { 
                    y= 1 - x;
                    c = 0;
                }
                ans += y+'0';
            } 
            reverse(ans.begin(), ans.end());
        }
        cout << ans << endl;
    }
    return 0;
}