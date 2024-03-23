/* created: 2024-03-23 21:17:52 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, max;
    cin >> k >> max;

    int ans = 0;
    for(int a=0; a<=k; a++) {
        for(int b=0; b<=k; b++) {
            int c = max - a - b;
            if(c >= 0 && c <= k) ans++;
        }
    }

    cout << ans;
    return 0;
}