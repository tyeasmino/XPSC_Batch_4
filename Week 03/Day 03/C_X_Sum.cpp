/* created: 2024-03-31 22:05:13 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; 
    cin >> t;   
    
    while (t--)
    {
        ll n, m, i, j;
        cin >> n >> m;

        ll a[n][m];

        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cin >> a[i][j]; 
            }
        }
            
        ll ans = 0;
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                ll sum = 0;
                ll x=i, y=j;

                while(x>=0 && x<n && y>=0 && y<m)
                {
                    sum = sum + a[x][y];
                    x++;
                    y++;
                }
                x=i, y=j;

                while(x>=0 && x<n && y>=0 && y<m)
                {
                    sum = sum + a[x][y];
                    x++;
                    y--;
                }
                x=i, y=j;

                while(x>=0 && x<n && y>=0 && y<m)
                {
                    sum = sum + a[x][y];
                    x--;
                    y--;
                }
                x=i, y=j;

                while(x>=0 && x<n && y>=0 && y<m)
                {
                    sum = sum + a[x][y];
                    x--;
                    y++;
                }
                x=i, y=j;

                sum = sum - 3*a[x][y];
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}