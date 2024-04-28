/* title: Week  - A_Binary_Search.cpp */
/* created: 2024-04-28 01:16:03 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, loop;
    cin >> n >> loop;

    ll a[n];
    for(ll i=0; i<n; i++) {
        cin >> a[i];
    }

    while (loop--)
    {
        ll find; cin >> find;
        ll l=0, r=n-1, mid, index = -1;
    
        while (l <= r)
        {
            mid = (l+r) / 2;

            if(find == a[mid]) {
                index = mid;
                break;
            }

            else if(find < a[mid]) r = mid - 1;
            else l = mid + 1;
        }

        if(index == -1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        
    }
        
    return 0;
}