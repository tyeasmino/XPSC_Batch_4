/* title: Week 6 - D_Children_Holiday.cpp */
/* created: 2024-05-02 23:39:12 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n);
    for(int i=0; i<n; i++) {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);
    auto ok = [&](int mid) {
        vector<int> may(n);
        int has = m;
        for(int i=0; i<n; i++) {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, can, remaining, current;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);

            total = t*z+y;
            can = mid / total;
            remaining = mid % total;
            current = can * z + min(z, remaining/t);
            current = min(has, current);
            has -= current;
            may[i] = current;
        }

        if(!has) {
            for(int i=0; i<n; i++) {
                can[i] = may[i];
            }
        }

        return(!has);
    };

    int l=0, r=1e8, mid, ans;
    while (l <= r)
    {
        mid = (r+l) /2;
        if(ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    for(auto c : can) cout << c << " ";
    

    return 0;
}