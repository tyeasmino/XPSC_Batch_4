/* title: Week 4 - T_Fedor_and_New_Game.cpp */
/* created: 2024-04-14 14:34:40 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countOfCompare(ll x) {
    ll check = 0;
    while (x != 0)
    {
        if(x & 1 == 1) check++;
        x >>= 1;
    }
    return check;
}

int main()
{
    ll n, m, k, i, cnt=0, cmp = 0;
    cin >> n >> m >> k;

    ll soldiers [m+1];
    for(i=0; i<=m; i++) cin >> soldiers[i];

    for(i=0; i<m; i++) {
        cmp = soldiers[i] ^ soldiers[m];

        if(countOfCompare(cmp) <= k) cnt++;
    }

    cout << cnt; 

    return 0;
}