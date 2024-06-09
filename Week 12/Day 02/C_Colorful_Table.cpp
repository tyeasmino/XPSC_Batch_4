/* title: Week 12 - C_Colorful_Table.cpp */
/* created: 2024-06-09 20:27:01 */
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        set<ll> list;

        for(ll i=0; i<n; i++) {
            cin >> a[i];
            list.insert(a[i]);
        }        

        ll maximum = 0, minimum = n-1;
        for(ll i=1; i<=k; i++) {
            if(list.count(i) == 0) cout << "0 ";
            else {
                while (maximum <= minimum && a[maximum] < i) maximum++;
                while (maximum <= minimum && a[minimum] < i) minimum--; 
              
                cout << 2*(abs(maximum-minimum)+1) << " ";
            } 
        }
        cout << endl;
    }
    
    return 0;
}