/* title: Week 16 - H_Have_Your_Cake_and_Eat_It_Too.cpp */
/* created: 2024-08-05 10:24:10 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll go(vector<ll> &a, ll start, ll need) {
    ll r = start;
    ll cur_sum = 0;
    while (r < a.size()) {
        cur_sum += a[r];
        if(cur_sum >= need) break;
        r++;
    }
    return r;
}

void test_case() {
    ll n;
    cin >> n;
    vector<ll> a[3];
    for(ll i=0; i<3; i++) {
        a[i].resize(n);
        for(ll j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    ll total = accumulate(a->begin(), a->end(), 0ll);
    ll need = (total + 2) / 3;

    vector<ll> order = {0, 1, 2};
    do{
        ll first = order[0];
        ll second = order[1];
        ll third = order[2];

        ll r1 = go(a[first], 0, need);
        ll r2 = go(a[second], r1+1, need);
        ll r3 = go(a[third], r2+1, need);

        if(r3 >= n) continue;

        vector<array<ll, 3>> ans = { {first, 0 , r1}, {second, r1+1, r2}, {third, r2+1, r3} };
        sort(ans.begin(), ans.end());

        for(ll i=0; i<3; i++) {
            cout << ans[i][1]+1 << " " << ans[i][2]+1 << " ";
        }
        cout << endl;
        return;
    } while(next_permutation(order.begin(), order.end()));   

    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        test_case();
    }       
    return 0;
}