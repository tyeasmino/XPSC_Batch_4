/* created: 2024-03-25 02:26:06 */
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

        string a, b;
        cin >> a >> b;

        bool flag = 0;
        for(int i=0; i<n; i++) {
            if((a[i] == 'R' && b[i]== 'B') || (a[i] == 'B' && b[i] == 'R')) {
                flag = 1; 
                break;
            } else if((a[i] == 'R' && b[i]== 'G') || (a[i] == 'G' && b[i] == 'R')) {
                flag = 1; 
                break;
            } else {
                flag = 0;
            }
        }

        (flag) ? cout << "NO\n" : cout << "YES\n";
    }
    
    return 0;
}