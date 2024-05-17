/* title: Week 8 - L_High_School_Become_Human.cpp */
/* created: 2024-05-17 14:23:52 */ 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double x, y;
    cin >> x >> y;

    double m = y * log(x);
    double n = x * log(y);
    if (x == y) cout << "=";
    else if(m > n ) cout << '>';
    else if (m < n) cout << '<';
    else cout << "=";
    return 0;
}
