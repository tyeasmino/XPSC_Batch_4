/* title: Week 15 - F_Elemental_Decompress.cpp */
/* created: 2024-08-08 00:16:42 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--)
    {
        ll n; 
        cin >> n;

        vector<ll> a(n+1);
        for(ll i=1; i<=n; i++) cin >> a[i];

        map<ll, vector<ll>> index;
        for(ll i=1; i<=n; i++) index[a[i]].push_back(i);

        bool flag = 0;
        for(ll i=1; i<=n; i++) {
            if(index[a[i]].size()>2) {
                flag = 1;
                break;
            }
        }

        if(flag) {
            cout << "NO" << endl;
            continue;
        } 

        vector<ll> p(n+1, -1), q(n+1, -1);
        multiset<ll> remaining_p, remaining_Q; 
        for(ll i=1; i<=n; i++) {
            remaining_p.insert(i);
            remaining_Q.insert(i);
        }

        for(ll i=1; i<=n; i++) {
            if(index[i].empty()) continue;
            if(index[i].size()==1) {
                p[index[i][0]] = i;
                remaining_p.erase(remaining_p.find(i));
            }
            else if(index[i].size()==2) {
                p[index[i][0]] = i;
                remaining_p.erase(remaining_p.find(i));
                q[index[i][1]] = i;
                remaining_Q.erase(remaining_Q.find(i));
            }
        }

        for(ll i=1; i<=n; i++) {
            if(p[i]==-1 && q[i]==-1) {
                auto px=remaining_p.end();
                px--;
                p[i]= *px;
                remaining_p.erase(px);

                auto qx = remaining_Q.end();
                qx--;
                q[i]=*qx;
                remaining_Q.erase(qx);
            } 
            else if(p[i]==-1) {
                if(remaining_p.empty()) {
                    flag = 1;
                    break;
                } 

                auto x=remaining_p.upper_bound(q[i]);
                if(x==remaining_p.begin()) {
                    flag=1;
                    break;
                }
                x--;
                p[i]= *x;
                remaining_p.erase(x);
            }
            else if(q[i]==-1) {
                if(remaining_Q.empty()) {
                    flag = 1;
                    break;
                } 

                auto x=remaining_Q.upper_bound(p[i]);
                if(x==remaining_Q.begin()) {
                    flag=1;
                    break;
                }
                x--;
                q[i]= *x;
                remaining_Q.erase(x);
            }
        }

        if(flag) {
            cout << "NO" << endl;
            continue;
        } 

        cout << "YES" << endl;
        for(ll i=1; i<=n; i++) cout << p[i] << " ";
        cout << endl;
        for(ll i=1; i<=n; i++) cout << q[i] << " ";
        cout << endl;
    }
    
    return 0; 
}