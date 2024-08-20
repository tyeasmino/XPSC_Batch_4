/* title: Week 17 - E_Iva_Pav.cpp */
/* created: 2024-08-20 00:32:41 */
#include <bits/stdc++.h>
using namespace std; 
const int maxN = 3e5+5;
long long a[maxN], t[4 * maxN];
#define ll long long 
void build(int n, int b, int e) {
    if (b == e) {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] & t[r];
}
 
long long query(int n, int b, int e, int i, int j) {
    if (e < i || j < b) {
        return 2147483647;
    }
    if (b >= i && e <= j) {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tc;
    cin >> tc;
    for(ll tcn=1; tcn<=tc; tcn++) { 

        int n, m;
        cin >> n;
        for (int i = 1;i <= n;i++) cin >> a[i];
        build(1, 1, n);

        cin >> m;
        while (m--) {
            int l, k;
            cin >> l >> k;
            
            ll low=l, high=n, ans = -1;
            while (low <= high)
            {
                ll mid = (low+high) / 2;
                ll annd = query(1, 1, n, l, mid);

                if(annd >= k) {
                    low = mid + 1;
                    ans = mid;
                } else {
                    high = mid - 1;
                }
            }
            cout << ans << " "; 
        }
        cout << endl;
    }
    return 0;
}