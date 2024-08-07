/* title: Week 16 - K_Appending_Mex.cpp */
/* created: 2024-08-04 01:12:34 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];

    ll flag = 1, maximum = a[0];
    for(ll i=0; i<n; i++) {
        if(a[i]>maximum+1 || a[i]>i) {
            cout << i+1;
            flag=0;
            break;
        }
        if(a[i] > maximum) {
            maximum = a[i];
        }
    }

    if(flag == 1) cout << "-1";

    return 0;
}