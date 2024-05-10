/* title: Week 7 - L_Keep_it_Beautiful.cpp */
/* created: 2024-05-10 14:26:22 */
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
        bool check = false;
        vector<ll> v;
        string s;
        for(ll i=0; i<n; i++) {
            ll x; cin >> x;     
            if(i==0) {
                v.push_back(x);
                s += '1';
            } else {
                if(check) {
                    if(x < v.back() || x > v[0]) {
                        s += '0';
                    }  
                    else { 
                        v.push_back(x);
                        s += '1';
                    }                    
                }
                else {
                    if(x >= v.back()) {
                        v.push_back(x);
                        s += '1';
                    }  
                    else { 
                        if(x > v[0]) {
                            s += '0';
                        } else {
                            check = true;
                            v.push_back(x);
                            s += '1';
                        }
                    }   
                }
            }
            // i- 0
            // check - f - 2 ta case
            // check - t - 2 ta case
        }
        cout << s << endl;
    }
    
    return 0;
}