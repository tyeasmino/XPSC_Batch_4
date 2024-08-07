/* title: Week 15 - H_Asterisk_Minor_Template.cpp */
/* created: 2024-08-08 01:40:27 */
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
        string a, b, ansa, ansb;
        cin >> a >> b;

        ll sizea = a.size(), sizeb = b.size();

        bool flag = 0;
        for(ll i=0; i<sizea-1; i++ && flag==0) {
            for(ll j=0; j<sizeb-1; j++) {
                if(a[i] == b[j] && a[i+1] == b[j+1]) {
                    ansa = a[i];
                    ansb = a[i+1];
                    flag = 1;
                    break;
                }
            }
        }

        if(flag) {
            cout << "YES" << endl;
            cout << "*" << ansa << ansb << "*" << endl;
        }
        else {
            if(a[0]==b[0]) {
                cout << "YES" << endl;
                cout << a[0] << "*" << endl;
            } else if(a[sizea-1]==b[sizeb-1]) {
                cout << "YES" << endl;
                cout << "*" << a[sizea-1] << endl;
            } else cout << "NO" << endl;
        }
    }
    
    return 0;
}