/* title: Week 15 - J_Superhero_Transformation.cpp */
/* created: 2024-08-08 02:34:43 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string vowels = "aeiou";

bool vowel(char c) {
    for(ll i=0; i<5; i++) {
        if(vowels[i]==c) return 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    ll ns = s.size(), nt=t.size();

    if(ns != nt) {
        cout <<"No";
        return 0; 
    }

    for(ll i=0; i<ns; i++) {
        if(vowel(s[i]) && vowel(t[i])) continue;
        else if(!vowel(s[i]) && !vowel(t[i])) continue;
        else {
            cout <<"No";
            return 0; 
        }
    }

    cout << "Yes";
     
    return 0;
}