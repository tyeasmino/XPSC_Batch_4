/* title: Week 9 - B_Sum_of_Three_Values.cpp */
/* created: 2024-05-21 23:09:50 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, s;
    cin >> n >> s;

    vector<pair<ll, ll>> index;
    for(ll i=0; i<n; i++) {
        ll x;
        cin >> x;
        index.push_back({x, i+1});
    }
    sort(index.begin(), index.end());

    for(ll i=0; i<n; i++) { 
        ll l = i+1, r = n-1, sum = 0;
        while (l < r)
        {
            sum = index[i].first + index[l].first + index[r].first;
            if(sum == s) {
                cout << index[i].second << " " << index[l].second << " " << index[r].second;
                return 0;
            } 
            else if(sum < s) l++;
            else r--;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}