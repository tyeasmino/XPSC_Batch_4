/* created: 2024-04-02 10:26:35 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, j;
        cin >> n;

        vector<string> a(n);
        map<string, int> mp;

        for(i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        } 

        for(i=0; i<n; i++) {
            int flag = 0, ssize = a[i].size();
            for(j=1; j<ssize; j++) {
                string first_part = a[i].substr(0, j);
                string last_part = a[i].substr(j, ssize-j);
                if(mp[first_part] >= 1 && mp[last_part] >= 1) flag = 1;
            }
            cout << flag;
        }
        cout << endl;
    }
    
    return 0;
}