/* title: Week 14 - A_Mathematical_Problem.cpp */
/* created: 2024-07-02 23:12:36 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void answer() {
    ll n;
        cin >> n;

        string s;
        cin >> s;

        ll ans = 1e18;
        for(ll i=0; i<n-1; i++) {
            ll value = (ll) (s[i]-48)*10+ (ll) (s[i+1]-48);
            ll sum = 0;

            for(ll j=0; j<i; j++) {
                if(s[j] == '0') {
                    cout << "0\n";
                    return;
                } 
                if(s[j] >= '2') sum += (ll) s[j]-48;
            }

            for(ll j=i+2; j<n; j++) {
                if(s[j] == '0') {
                    cout << "0\n";
                    return;
                } 
                if(s[j] >= '2') sum += (ll) s[j]-48;
            }

            if(value == 1 && sum > 0) value = sum;
            else value += sum;
            ans = min(ans, value);
        }
        cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        answer();
    }    
    return 0;
}

