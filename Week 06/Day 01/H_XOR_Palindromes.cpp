/* title: Week  - H_XOR_Palindromes.cpp */
/* created: 2024-04-28 23:37:44 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t; cin >> t;

    while (t--)
    {
        ll n; cin >> n;
        string s, ans; cin >> s;

        ll matchingPair = 0, nonMatchingPair = 0;
        ll l = 0, r = n-1;
        while (l < r)
        {
            if(s[l] == s[r]) matchingPair ++; // matchingPair or palindrom
            else nonMatchingPair++;
            l++;
            r--;
        } 

        for(ll i=0; i<=n; i++) {
            ll totalNumberOne = i;
            totalNumberOne = totalNumberOne - nonMatchingPair;

            if(totalNumberOne < 0) {
                ans.push_back('0');
                continue;
            } 

            totalNumberOne = max((totalNumberOne % 2), totalNumberOne - 2*matchingPair);
            if(totalNumberOne - (n%2) > 0) totalNumberOne =  totalNumberOne - (n%2);
            else totalNumberOne = 0;

            if(totalNumberOne == 0) ans.push_back('1');
            else ans.push_back('0');
        }

        cout << ans << endl;
    }
    
    return 0;
}