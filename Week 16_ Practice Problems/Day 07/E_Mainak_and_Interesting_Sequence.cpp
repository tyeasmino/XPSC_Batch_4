/* title: Week 11 - E_Mainak_and_Interesting_Sequence.cpp */
/* created: 2024-08-15 23:52:56 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n, m, sum=0;
        cin >> n >> m;

        if(n>m) {
            cout << "NO\n";
            continue;
        } 

        vector<ll> a(n);
        if(n%2==0) {
            if(m%2==0) {
                cout << "YES\n";
                for(ll i=0; i<n-2; i++) {
                    a[i]=1;
                    sum++;
                }
                a[n-2] = (m-sum)/2;
                a[n-1] = a[n-2];
            }
            else {
                cout << "NO\n";
                continue;
            }
        }
        else if(n%2==1) {
            cout << "YES\n";
            for(ll i=0; i<n-1; i++) {
                a[i]=1;
                sum++;
            } 
            a[n-1] = m - sum;
        } 
        
        for(ll i=0; i<n; i++) cout << a[i] << " ";
        cout << endl; 
    }
    
    return 0;
}