/* title: Week 12 - G_Alphabetic_Removals.cpp */
/* created: 2024-06-22 21:41:39 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    multiset<char> v, v1;
    for(auto c : s) { 
        v.insert(c);
    }
    for(auto c : v) {
        if(k > 0) {
            v1.insert(c);
            k--;
        }
        else break;
    }

    string ans = "";
    for(auto c : s) {
        auto find = v1.find(c);
        if(find != v1.end()) v1.erase(find);
        else ans += c;
    }

    cout << ans;
    return 0;
}