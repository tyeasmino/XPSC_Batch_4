/* title: Week 16 - G_Prefix_Permutation_Sums.cpp */
/* created: 2024-07-31 23:57:57 */
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

        vector<ll> a(n);
        for(ll i=0; i<=n-2; i++) cin >> a[i];

        ll maxcan = (n*(n+1))/2;
        if(a[n-2] > maxcan) {
            cout << "NO\n";
            continue; 
        }

        if(a[n-2] != maxcan) {
            a[n-1] = maxcan;
            vector<ll> newa;
            for(ll i=n-2; i>=0; i--) {
                newa.push_back(a[i+1]-a[i]);
            }
            newa.push_back(a[0]);

            bool flag = true;
            vector<bool> visited(n+1, false);
            for(ll i=0; i<n; i++) {
                if(newa[i] > n or visited[newa[i]]) {
                    flag = false;
                    break;
                }
                visited[newa[i]] = true;
            } 

            (flag) ? cout << "YES\n" : cout << "NO\n";
            continue;
        } 
        vector<bool> visited(n+1, false);
        vector<ll> sum;
        for(ll i=0; i<=n-2; i++) {
            if(i==0) {
                sum.push_back(a[i]);
                if(a[i] <= n) visited[a[i]] = true;
            }
            else {
                sum.push_back(a[i] - a[i-1]);
                if(a[i]-a[i-1] <= n) visited[a[i]-a[i-1]] = true; 
            }
        }

        vector<ll> missing;
        for(ll i=1; i<=n; i++) {
            if(!visited[i]) {
                missing.push_back(i);
            }
        }

        if(missing.size() != 2) {
            cout << "NO\n";
            continue;
        }

        bool fillgap = false;
        for(auto i : sum) {
            if(missing[0]+missing[1] == i) {
                fillgap=true;
                break;
            }
        } 

        (fillgap) ? cout << "YES\n" : cout << "NO\n";        
    }
    
    return 0;
}