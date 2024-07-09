/* title: Week 14 - M_3_SUM.cpp */
/* created: 2024-07-09 22:19:58 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        map<ll, ll> mp;
        ll ans = 0, a[n+1];
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            ll d = a[i]%10;
            mp[d]++;
        }

        for(ll i=0; i<10; i++) {
            for(ll j=0; j<10; j++) {
                for(ll k=0; k<10; k++) {
                    ll a=-1, b=-1, c=-1;
                    if(mp[i]!=0) {
                        a=1;
                        mp[i]--;
                    }
                    if(mp[j]!=0) {
                        b=1;
                        mp[j]--;
                    } 

                    if(mp[k]!=0) {
                        c=1;
                        mp[k]--;
                    }  

                    if(a==1 && b==1 && c==1) {
                        ll sum = i+j+k;
                        if(sum % 10 == 3) {
                            ans = 1;
                            break;
                        }
                    }

                    if(a==1) mp[i]++;
                    if(b==1) mp[j]++;
                    if(c==1) mp[k]++;
                }
            }    
        }

        if(ans==1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}