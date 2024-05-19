/* title: Week 8 - V_Nastia_and_Nearly_Good_Numbers.cpp */
/* created: 2024-05-19 21:49:05 */
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
        ll a, b;
        cin >> a >> b;

        if(b != 1) {
            cout << "YES\n";
            cout << a*b << " " << a << " " << (b+1) * a << endl;
        }
        else cout << "NO\n";
    }
    
    return 0;
}