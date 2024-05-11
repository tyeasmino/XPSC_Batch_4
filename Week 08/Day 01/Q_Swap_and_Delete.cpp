/* title: Week 8 - Q_Swap_and_Delete.cpp */
/* created: 2024-05-11 23:12:10 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; 
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        ll one=0, zero=0;
        for(ll i=0; i<s.size(); i++) {
            if(s[i]=='0') zero++;
            else one++;
        }
        
        for(ll i=0; i<s.size(); i++) {
            if(s[i] == '1') {
                if(zero > 0) zero--;
                else break;
            } else if(s[i] == '0') {
                if(one > 0) one--;
                else break;
            }
        }
        cout << one + zero << endl;
    }
    
    return 0;
}