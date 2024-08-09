/* title: Week 13 - F_Alice_and_the_Cake.cpp */
/* created: 2024-08-09 21:48:58 */
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

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        if(n == 1) {
            cout << "YES" << endl;
            continue;
        }

        ll sum = 0;
        map<ll, ll> freq;
        bool flag = true; 

        for(ll i=0; i<n; i++) {
            freq[a[i]]++;
            sum += a[i];
        }

        priority_queue<ll> pq;
        pq.push(sum);

        while (!pq.empty()) {
            ll large=pq.top();
            pq.pop();
            
            ll x = large/2, y=large-x;
            if(freq[x] > 0) freq[x]--;
            else if(freq[x]==0 && x>1) pq.push(x); 

            if(freq[y] > 0) freq[y]--;
            else if(freq[y]==0 && y>1) pq.push(y);
            
            if(pq.size() > n+2) {
                flag=false;
                break;
            }
        }

        for(ll i=0; i<n; i++) {
            if(freq[a[i]] > 0) {
                flag = false;
                break;
            }
        }
        
        (flag) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}