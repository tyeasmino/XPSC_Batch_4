/* title: Week 16 - L_King_Escape.cpp */
/* created: 2024-08-04 01:29:32 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, a1, a2, b1, b2, c1, c2;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    bool flag = 0;
    if((b1<a1 && c1<a1) || (b1>a1 && c1>a1)) {
        if((b2<a2 && c2<a2) || (b2>a2 && c2>a2)) {
            flag = 1;
        } 
    }

    (flag) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}