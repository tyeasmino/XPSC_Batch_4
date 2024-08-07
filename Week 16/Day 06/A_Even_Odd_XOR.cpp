/* title: Week 15 - A_Even_Odd_XOR.cpp */
/* created: 2024-08-05 23:49:06 */
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
        ll n;
        cin >> n;

        if(n==3) {
            cout << "2 1 3" << endl;
            continue;
        }

        if(n%4 == 0) {
            ll add = 1<<30;
            ll curr=1;
            for(ll i=1; i<=n/2; i++) {
                cout << curr << " " << curr+add << " ";
                curr++;
            }
        }

        else if(n%2==1) {
            ll x = 1<<25;
            ll y = 1<<26;
            cout << y << " ";

            ll curr=1;
            for(ll i=1; i<(n/2); i++) {
                cout << curr << " " << curr+x << " ";
                curr++;
            }

            if((n/2) % 2 == 0) y += x;
            cout << (n/2) << " " << (n/2)+y << " ";
        } 

        else {
            ll x = 1<<25;
            ll y = 1<<26;
            cout << 0 << " " << y << " ";

            ll curr=1;
            for(ll i=1; i<=(n/2)-2; i++) {
                cout << curr << " " << curr+x << " ";
                curr++;
            }

            cout << curr << " " << curr+x+y << " ";
        }
        cout << endl;
    }    
    return 0;
}