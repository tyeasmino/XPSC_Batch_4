/* created: 2024-03-24 21:06:33 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, size;
        cin >> n >> size;
        
        string s[n];
        int ans = INT_MAX, dis, sum;
        for(int i=0; i<n; i++) cin >> s[i];

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                sum = 0;
                for(int k=0; k < size; k++) {
                    dis = abs(s[i][k] - s[j][k]);
                    sum = sum + dis;
                }
                if(sum < ans) ans = sum; 
            }
        }
    
        cout << ans << endl;
    }
    
    return 0;
}