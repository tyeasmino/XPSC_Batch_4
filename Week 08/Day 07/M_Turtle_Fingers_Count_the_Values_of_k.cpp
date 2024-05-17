/* title: Week 8 - M_Turtle_Fingers_Count_the_Values_of_k.cpp */
/* created: 2024-05-17 16:00:57 */
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
        ll a, b, l, cmp, ans = 0;
        cin >> a >> b >> l;

        vector<ll> divisorL;
        for(ll i=1; i<= sqrtl(l); i++) {
            if(l % i == 0) {
                if(l / i == i) divisorL.push_back(i);
                else {
                    divisorL.push_back(i);
                    divisorL.push_back(l/i);
                }
            }
        }

        vector<ll> xa, yb;
        for(ll i=0; i<=20; i++) {
            cmp = pow(a, i);
            if(cmp <= 1e6) xa.push_back(cmp);
            else break;
        }

        for(ll i=0; i<=20; i++) {
            cmp = pow(b, i);
            if(cmp <= 1e6) yb.push_back(cmp);
            else break;
        }

        for(ll i=0; i<divisorL.size(); i++) {
            bool flag = false;
            for(ll j=0; j< xa.size(); j++) {
                for(ll kk=0; kk<yb.size(); kk++) {
                    if(divisorL[i] * xa[j] * yb[kk] == l) {
                        ans++;
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}