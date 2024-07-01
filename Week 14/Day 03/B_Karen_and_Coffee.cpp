/* title: Week 14 - B_Karen_and_Coffee.cpp */
/* created: 2024-07-01 23:29:38 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[200005], arr2[200005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k, q;
    cin >> n >> k >> q;
    for(ll i=0; i<n; i++) {
        ll a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b+1]--;
    }

    for(ll i=1; i<200005; i++) {
        arr[i] += arr[i-1];
        arr2[i] += arr2[i-1] + (arr[i] >= k);
    }

    while (q--) {
        ll a, b;
        cin >> a >> b;
        cout << arr2[b] - arr2[a-1] << endl;
    }
    return 0;
}