/* title: Week 16 - J_Test_of_Love.cpp */
/* created: 2024-08-04 00:37:44 */
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
        ll n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        ll start = m-1, noneed = 0, corrocodile_present=0;
        for(char c : s) {
            if(c == 'L') start = m;
            else if(c == 'W' && start <= 0) noneed++;
            else if(c == 'C' && start <= 0) corrocodile_present++;
            start--; 
        }

        if(noneed > k) corrocodile_present++;
        (!corrocodile_present) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}