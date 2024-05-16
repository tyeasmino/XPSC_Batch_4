/* title: Week 8 - B_Relatively_Prime_Pairs.cpp */
/* created: 2024-05-16 22:07:42 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for(ll i=l, j=l+1; i<r-1, j<=r; i +=2, j+=2) {
        cout << i << " " << j << endl;
    }
    return 0;
}