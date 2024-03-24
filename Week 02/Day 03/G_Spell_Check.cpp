/* created: 2024-03-23 22:00:06 */
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

        sort(s.begin(), s.end());
        if(s == "Timru") cout << "YES\n";
        else cout << "NO\n";  
    }
    
    return 0;
}