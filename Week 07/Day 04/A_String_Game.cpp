/* title: Week 7 - A_String_Game.cpp */
/* created: 2024-05-07 05:09:09 */
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
        ll n; cin >> n;
        string s; cin >> s;

        ll countone = 0, countzero = 0;
        for(ll i=0; i<n; i++) {
            if(s[i] == '1') countone++;
            else countzero++;
        }

        ll possiblePair = min(countone, countzero);
        if(possiblePair % 2 == 0) cout << "Ramos\n";
        else cout << "Zlatan\n";
    }
    
    return 0;
}