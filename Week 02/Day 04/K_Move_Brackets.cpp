/* created: 2024-03-24 00:56:06 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        int cnt = 0, ans = 0;
        for(char c: s) {
           if(c == '(') cnt++;
           else cnt--;

           if(cnt < 0) {
                ans++;
                cnt = 0;
           }
        }

        cout << ans << endl;
    }
    
    return 0;
}