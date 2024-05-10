/* title: Week 7 - O_Binary_Inversions.cpp */
/* created: 2024-05-10 23:34:40 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n; 

ll inversions(vector<ll> a) {
    ll total = 0, one = 0;
    for(ll i=0; i<n; i++) {
        if(a[i] == 1) one++;
        else total += one;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        ll cnt = inversions(a);
        ll indexZero = -1;
        for(ll i=0; i<n; i++) {
            if(a[i] == 0) {
                a[i] = 1;
                indexZero = i;
                break;
            }
        }

        cnt = max(cnt, inversions(a));
        if(indexZero != -1) a[indexZero] = 0;

        for(ll i=n-1; i>=0; i--) {
            if(a[i]==1) {
                a[i] = 0;
                break;
            }
        }
        cnt = max(cnt, inversions(a));
        cout << cnt << endl;
    }
    
    return 0;
}