/* title: Week 17 - E_Tracking_Segments.cpp */
/* created: 2024-08-19 02:26:14 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e5 + 9;
long long a[maxN], t[4 * maxN];

void build(int n, int b, int e) {
    if (b == e) {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v) {
    if (i<b || i>e) {
        return;
    }
    if (b == e) {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

long long query(int n, int b, int e, int i, int j) {
    if (e < i || j < b) {
        return 0;
    }
    if (b >= i && e <= j) {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tc;
    cin >> tc;
    while (tc--) { 
        int n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> a(m);
        for (int i = 0;i < m;i++) cin >> a[i].first >> a[i].second;

        ll q;
        cin >> q;
        vector<ll> queries(q);
        for (int i = 0;i < q;i++) cin >> queries[i];
        
        auto ok = [&](ll mid) {
            build(1, 1, n);

            for(ll i=0; i<=mid; i++) {
                update(1, 1, n, queries[i], 1);
            }

            bool found = false;
            for(ll i=0; i<m; i++) {
                ll L=a[i].first, R=a[i].second, seg_len, need, has;
                seg_len = (R-L)+1;
                has = query(1, 1, n, L, R);
                need =seg_len - has;

                if(has > need) {
                    found = true;
                    break;
                }
            }
            return found;
        };


        ll l=0, r=q-1, mid, ans=-1;
        while (l <= r) {
            mid = (l+r)/2;
            if(ok(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if(ans != -1) {
            ans++;
        } 
        cout << ans << endl;
    }
    return 0;
}