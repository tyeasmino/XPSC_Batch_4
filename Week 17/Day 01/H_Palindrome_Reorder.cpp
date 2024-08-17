/* title: Week 9 - H_Palindrome_Reorder.cpp */
/* created: 2024-08-17 00:59:02 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    vector<ll> a(26);
    for(ll i=0; i<s.size(); i++) a[s[i]-65]++;
    
    ll cnt=0;
    for(ll i=0; i<26; i++) {
        if(a[i] % 2 == 1) cnt++;
    }
    
    if(cnt>1) cout << "NO SOLUTION";
    else {
        vector<char> odd, even;
        for(ll i=0; i<26; i++) {
            if(a[i] % 2 == 1) {
                for(ll j=0;j<a[i]; j++) {
                    odd.push_back(i+65);
                }
            } 
            else if(a[i]>0 && a[i]%2==0) {
                for(ll j=0;j<(a[i]/2); j++) {
                    even.push_back(i+65);
                }
            }
        }

        for(ll i=0; i<even.size(); i++) cout << even[i];
        for(ll i=0; i<odd.size(); i++) cout << odd[i];
        reverse(even.begin(), even.end());
        for(ll i=0; i<even.size(); i++) cout << even[i];
    }
    return 0;
}