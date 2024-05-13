/* title: Week 5 - D_Two_Elevators.cpp */
/* created: 2024-05-13 00:16:15 */
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
        ll a, b, c;
        cin >> a >> b >> c;

        ll direct = abs(a - 1);
        ll b_c_a = abs(b-c) + c - 1;

        if(direct == b_c_a) cout << 3;
        else if(direct < b_c_a) cout << 1;
        else cout << 2;
        cout << endl;
    }    
    return 0;
}