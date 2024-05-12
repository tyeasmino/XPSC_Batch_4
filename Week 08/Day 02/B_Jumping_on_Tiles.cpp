/* title: Week 5 - B_Jumping_on_Tiles.cpp */
/* created: 2024-05-12 11:17:03 */
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

        ll n = s.length();
        map<char, vector<ll>> mp;
        for(ll i=0; i<n; i++) mp[s[i]].push_back(i+1);

        if(s[0] > s[n-1]) {
            ll j=0, cost = abs(s[0]-s[n-1]);
            vector<ll> root; 

            for(ll i=0; s[0]+i >= s[n-1]; i--) {
                char c = s[0]+i;
                if(mp.find(c) != mp.end()) {
                    for(auto a : mp[c]) root.push_back(a);
                }
            }

            cout << cost << " " << root.size() << endl;

            for(auto r : root) cout << r << " ";
            cout << endl;
        }
        else if(s[0] < s[n-1]) {
            ll j=0, cost = abs(s[0]-s[n-1]);
            vector<ll> root; 

            for(ll i=0; s[0]+i <= s[n-1]; i++) {
                char c = s[0]+i;
                if(mp.find(c) != mp.end()) {
                    for(auto a : mp[c]) root.push_back(a);
                }
            }

            cout << cost << " " << root.size() << endl;

            for(auto r : root) cout << r << " ";
            cout << endl;
        } 
        else {
            cout << 0 << " " << mp[s[0]].size() << endl;
            for(auto m : mp[s[0]]) cout << m << " ";
            cout << endl;
        }
    }
    
    return 0;
}