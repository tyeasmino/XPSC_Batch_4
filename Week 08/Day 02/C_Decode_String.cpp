/* title: Week 5 - C_Decode_String.cpp */
/* created: 2024-05-12 23:46:34 */
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
        ll n, asci;
        cin >> n;
        string s, ans="";
        cin >> s;

        for(ll i=0; i<n; i++) {
            if((i+2<n && s[i+2]=='0') && (i+3>=n or s[i+3]!='0')) {
                asci = ((s[i]-'0')*10)+(s[i+1]-'0');
                i = i + 2; 
            } else {
                asci = (s[i] - '0');
            }
            ans.push_back((char)(asci+96));
        }
        cout << ans << endl;
    }
    
    return 0;
}