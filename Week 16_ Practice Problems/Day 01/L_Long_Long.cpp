/* created: 2024-04-05 13:58:25 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, sum=0, operation=0; 
        bool pos = true;
        cin >> n;

        vector<ll> v(n);
        for(i=0; i<n; i++) {
            cin >> v[i];
            sum += abs(v[i]);
        } 

        for(i=0; i<n+1; i++) {
            if(pos == false) {
                if(v[i] > 0 || i==n) {
                    operation++;
                    pos = true;
                }
            } 
            else {
                if(v[i] < 0) {
                    pos = false;
                }
            }
        }

        cout << sum << " " << operation << endl;
    }
    
    return 0;
}