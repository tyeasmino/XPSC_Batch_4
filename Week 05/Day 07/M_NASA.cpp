/* title: Week 4 - M_NASA.cpp */
/* created: 2024-04-27 22:17:07 */ 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxN = (1 << 15); 
vector<ll> all_palindromes;

void mark_palindrome() {
    for(ll i=0; i<maxN; i++) {
        string s = to_string(i);
        ll len = s.length();

        bool check = true;
        for(ll i=0; i< (len/2); i++) {
            if(s[i] != s[len - i - 1]) {
                check = false;
                break;
            }
        }
        if(check) all_palindromes.push_back(i); 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    mark_palindrome();
    // for(auto val:all_palindromes) {
    //     cout << val << "\n";
    // }
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a, cnt(maxN);
        for(ll i=0; i<n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll count = n;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<all_palindromes.size(); j++) {
                ll b = (a[i] ^ all_palindromes[j]);

                count += cnt[b];
            }
        }

        cout << (count/2) << endl;
    }
    
    return 0;
}