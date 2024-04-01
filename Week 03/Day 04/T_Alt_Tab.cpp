/* created: 2024-04-01 02:10:09 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n; 
    cin >> n;

    vector<string> v;
    for(ll i=0; i<n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
    }

    map<string, ll> mp;
    string ans = "";

    for(ll i= n-1; i>=0; i--) {
        string s = v[i];

        if(mp.find(s) != mp.end()) continue;
        else {
            ans += s[s.size() - 2];
            ans += s[s.size() - 1];
            mp[s]++;
        }
    }

    cout << ans;
    
    return 0;
}