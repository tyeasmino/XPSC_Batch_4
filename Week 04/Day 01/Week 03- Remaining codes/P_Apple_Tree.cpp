/* created: 2024-04-05 14:19:28 */
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 1e6+5;
vector<ll> a[N]; 
vector<ll> lastNode;  

void dfs(ll x, ll root) {  
    bool flag = false;
    for(auto i : a[x]) {
        if(i == root) continue;
        flag = true;
        dfs(i, x); 
        lastNode[x] += lastNode[i];      
    }

    if(!flag) {
        lastNode[x] = 1; 
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n; 

        for(ll i=0; i<=n; i++) a[i].clear();

        for(int i=1; i<n; i++) {
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        } 

        lastNode.assign(n+1,0);
        dfs(1, -1);
        
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            ll ans = lastNode[x] * lastNode[y];
            cout << ans << endl;
        }   
    }
    return 0;
}

