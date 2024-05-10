/* title: Week 7 - I_3_palindrome.cpp */
/* created: 2024-05-10 12:06:48 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    for(ll i=0; i<n/4; i++) cout << "bbaa";
    if(n % 4 == 3) cout << "bba";
    if(n % 4 == 2) cout << "bb";
    if(n % 4 == 1) cout << "b";
    return 0;
}