/* title: Week 17 - B_Rating_Increase.cpp */
/* created: 2024-08-23 23:26:58 */
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

        string a, b;
        a = s[0];
        bool flag = 0;
        for(ll i=1; i<s.size(); i++) {
            if(s[i]!='0' || flag==1) {
                b += s[i];
                flag = 1;
            }
            else a += s[i];
        }

        if(b.size() == 0) cout << -1 << endl;
        else {
            ll as = stoi(a), bs = stoi(b);
            if(bs > as && as!=0 && bs!=0) cout << as << " " << bs << endl;
            else cout << -1 << endl;
        }
    }
    
    return 0;
}