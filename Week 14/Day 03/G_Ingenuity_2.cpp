/* title: Week 14 - G_Ingenuity_2.cpp */
/* created: 2024-07-01 21:43:50 */
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

        string s;
        cin >> s;

        ll e=0, w=0, n1=0, s1=0;
        for(char c:s) {
            if(c=='E') e++;
            else if(c=='W') w++;
            else if(c=='N') n1++;
            else if(c=='S') s1++;
        }

        if((n1+s1)&1 or(e+w)&1) {
            cout << "NO\n";
            continue;
        }        
        
        string ans = "";
        for(ll i=0; i<n; i++) ans.push_back('R');
        for(ll i=0; i<n; i++) {
            if(s[i]=='E' or s[i]=='W') ans[i]='H';
        }

        ll c1 = n1/2, c2 = s1/2, c3=e/2, c4=w/2;
        for(ll i=0; i<n; i++) {
            if(s[i]=='N' and c1) {ans[i]='H'; c1--;}
            if(s[i]=='S' and c2) {ans[i]='H'; c2--;}
            if(s[i]=='E' and c3) {ans[i]='R'; c3--;}
            if(s[i]=='W' and c4) {ans[i]='R'; c4--;}
        }

        ll cntR=0, cntH=0;
        for(char c:ans) {
            if(c=='R') cntR++;
            else cntH++;
        }

        if(cntR==n || cntH==n) {cout << "NO\n"; continue;}
        cout << ans << endl;
    }     
    return 0;
}