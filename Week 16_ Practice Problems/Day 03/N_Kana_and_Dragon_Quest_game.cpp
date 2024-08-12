/* title: Week 13 - N_Kana_and_Dragon_Quest_game.cpp */
/* created: 2024-08-12 22:36:50 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll x, n, m;
        cin >> x >> n >> m;

        while (x>0 && n>0 && floor(x/2)+10 <x)
            n--, x = floor(x/2)+10;
        
        if(x <= m*10) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}