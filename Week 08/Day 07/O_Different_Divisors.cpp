/* title: Week 8 - O_Different_Divisors.cpp */
/* created: 2024-05-17 23:13:15 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll find(ll x) {
    while (1)
    {
        bool find = false;
        for(ll i=2; i*i <=x; i++) {
            if(x % i == 0) {
                find = true;
                break;
            }
        }
        if(find == false) break;
        else x++;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        
        ll a = n + 1;
        a = find(a);
        ll b = n + a;
        b = find(b);

        cout << a * b << endl;
    }
    
    return 0;
}