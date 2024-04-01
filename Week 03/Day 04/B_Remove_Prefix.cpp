// read revears and check map freq. if greater than one then i can be answer
/* created: 2024-04-01 10:40:36 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i;
        cin >> n;
        vector<ll> v(n);
        set<ll> st;

        for(i=0; i<n; i++) {
            cin >> v[i];
        }

        reverse(v.begin(), v.end());

        ll unique = 0;
        for(i=0; i<n; i++) {
            if(unique>st.size()) break;
            st.insert(v[i]); 
            unique++;
        } 
        cout << n - st.size() << endl;
    }
    
    return 0;
}