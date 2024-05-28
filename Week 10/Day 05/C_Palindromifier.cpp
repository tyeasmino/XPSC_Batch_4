/* title: Week 10SZ - C_Palindromifier.cpp */
/* created: 2024-05-29 05:08:04 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    ll n =s.size();
    ll m = 2*n - 2;
    cout << 3 << endl;
    cout << "L " << n - 1 << endl;
    cout << "R " << n - 1 << endl;
    cout << "R " << m + 1 << endl;
    return 0;
}