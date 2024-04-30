/* title: Week 6 - H_Sum_of_Cubes.cpp */
/* created: 2024-04-30 22:41:35 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxN = 1e4;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> powerList;
    for(ll i=1; i<=maxN; i++) {
        powerList.push_back(pow(i, 3));
    }

    ll t;
    cin >> t;

    while (t--) {
        ll x; 
        cin >> x;
        bool find = false;

        for(ll i=0; i<maxN; i++) {  
            if(powerList[i] >= x) break;

            int l=0, r=maxN-1, mid;
            ll need = x - powerList[i]; 
            bool check = false;

            while (l <= r) {
                mid = (r + l) / 2;
                if(powerList[mid] == need) {
                    check = true;
                    break;
                } else if(powerList[mid] > need) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }            
            if(check) {
                find = true;
                break;
            } 
        }
        if(find) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}