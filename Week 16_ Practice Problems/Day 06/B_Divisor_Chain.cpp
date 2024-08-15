/* title: Week 11 - B_Divisor_Chain.cpp */
/* created: 2024-08-15 01:33:14 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, n1, data=1;
        cin >> n;
        n1 = n;
        vector<ll> a, ans;
        while (n1 != 0) {
            a.push_back(n1 % 2);
            n1 = n1 / 2;
        }
        
        ans.push_back(n);
        for(ll i=0; i<a.size()-1; i++) {
            if(a[i] == 1) {
                ans.push_back(n - data);
                n = n - data;
            } 
            data = data * 2;
        }

        while (n != 1) {
            ans.push_back(n/2);
            n = n/2;
        }
        
        cout << ans.size() << endl;
        for(ll i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}