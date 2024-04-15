/* title: Week 4 - B_Petr_and_a_Combination_Lock.cpp */
/* created: 2024-04-14 16:46:10 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, i, j, sum, flag = 0;
    cin >> n;

    ll a[n];
    for(i=0; i<n; i++) cin >> a[i];

    ll combination = 1<<n; 
    for(i=0; i<combination; i++) {
        sum = 0;
        for(j=0; j<n; j++) {
            if(i & (1<<j)) sum += a[j];
            else sum -= a[j];
        }
        if(sum % 360 == 0) {
            flag = 1;
            break;
        }
    }

    (flag) ? cout << "YES" : cout << "NO";
    return 0;
}