/* title: Week 17 - C_Number_of_Minimums_on_a_Segment.cpp */
/* created: 2024-08-18 22:57:56 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 1e5 + 9, inf=1e9+9;
ll a[maxN];

struct node {
    ll mn, cnt;
};
node t[4*maxN];

node merge(node l, node r) {
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.cnt = 0;

    if(l.mn == ans.mn) ans.cnt += l.cnt;
    if(r.mn == ans.mn) ans.cnt += r.cnt;

    return ans; 
}

void build(int n, int b, int e) {
    if(b==e) {
        t[n].mn = a[b]; 
        t[n].cnt = 1; 
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid+1, e);

    // node[n] = node[l] + node[r];
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v) {
    if(i<b || i>e) return; // out
    if(b==e){
        t[n].mn = v; // in 
        t[n].cnt = 1;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid+1, e, i, v);

    // node[n] = node[l] + node[r];
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j) {
    if(e<i || j<b) return {inf, 1}; // outer range 
        // return 0; 

    if(b>=i && e<=j) return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    // return query(l, b, mid, i, j) + query(r, mid+1, e, i, j);    
    return merge(query(l, b, mid, i, j), query(r, mid+1, e, i, j));    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);
    while(m--){
        int op;
        cin >> op;
        if(op == 1) {
            int index, value;
            cin >> index >> value;
            index++;
            update(1, 1, n, index, value);
        } else {
            int l, r;
            cin >> l >> r;
            l++;
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << " " << ans.cnt << endl;
        }
    }
    return 0;
}