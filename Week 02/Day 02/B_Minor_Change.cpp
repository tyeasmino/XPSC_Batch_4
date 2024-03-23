/* created: 2024-03-23 21:37:54 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;

    int ans=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] != t[i]) ans++;
    }

    cout << ans;
    return 0;
}