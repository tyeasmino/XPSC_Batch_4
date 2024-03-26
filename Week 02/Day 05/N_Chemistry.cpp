/* created: 2024-03-25 22:59:25 */
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mp;
        for(int i=0; i<n; i++) mp[s[i]]++;

        int cnt = 0;            
        for(auto m : mp) 
            if(m.second % 2 != 0) 
                cnt++;
        
        if(cnt-1 < 0) cnt = 0;
        else cnt--;
        
        if(cnt <= k) cout << "YES\n";
        else cout << "NO\n";
        
    }
    
    return 0;
}