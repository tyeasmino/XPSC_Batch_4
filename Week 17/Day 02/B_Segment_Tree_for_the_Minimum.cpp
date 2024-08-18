/* title: Week 17 - B_Segment_Tree_for_the_Minimum.cpp */
/* created: 2024-08-18 22:50:08 */ 
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxN = 1e5 + 9, inf=1e9+9;
ll a[maxN], node[4*maxN];

void build(int n, int b, int e) {
    if(b==e) {
        node[n] = a[b]; 
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid+1, e);

    // node[n] = node[l] + node[r];
    node[n] = min(node[l], node[r]);
}

void update(int n, int b, int e, int i, int v) {
    if(i<b || i>e) return; // out
    if(b==e){
        node[n] = v; // in 
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid+1, e, i, v);

    // node[n] = node[l] + node[r];
    node[n] = min(node[l], node[r]);
}

ll query(int n, int b, int e, int i, int j) {
    if(e<i || j<b) return inf; // outer range 
        // return 0; 

    if(b>=i && e<=j) return node[n];

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    // return query(l, b, mid, i, j) + query(r, mid+1, e, i, j);    
    return min(query(l, b, mid, i, j), query(r, mid+1, e, i, j));    
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
            ll ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }
    return 0;
}