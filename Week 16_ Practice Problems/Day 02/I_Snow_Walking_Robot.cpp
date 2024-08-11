/* title: Week 13 - I_Snow_Walking_Robot.cpp */
/* created: 2024-08-11 09:42:02 */
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

        map<char, ll> mp;
        for(auto c : s) mp[c]++;

        ll cntUD = min(mp['U'], mp['D']);
        ll cntRL = min(mp['R'], mp['L']);

        if(cntUD==0 && cntRL==cntUD) cout << "0\n \n"; 
        else if(cntUD == 0) cout << "2\nRL\n"; 
        else if(cntRL == 0) cout << "2\nUD\n"; 
        else {
            string ans = "";
            for(ll i=0; i<cntUD; i++) ans += 'U';
            for(ll i=0; i<cntRL; i++) ans += 'R';
            for(ll i=0; i<cntUD; i++) ans += 'D';
            for(ll i=0; i<cntRL; i++) ans += 'L';

            cout << ans.size() << endl << ans << endl;            
        }
    }
    
    return 0;
}