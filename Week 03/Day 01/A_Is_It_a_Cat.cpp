/* created: 2024-03-29 21:57:56 */
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

        bool flagm = 0, flage =0, flago = 0, flagw =0;
        int i=0, j, k, l;
        while (s[i] == 'm' || s[i] == 'M')
        {
            i++;
            flagm = 1;
        }
        j = i;  
        
        while (s[j] == 'e' || s[j] == 'E')
        {
            j++;
            flage = 1;
        }
        k = j; 

        while (s[k] == 'o' || s[k] == 'O')
        {
            k++;
            flago = 1;
        }
        l = k;

        while (s[l] == 'w' || s[l] == 'W')
        {
            l++;
            flagw = 1;
        }
        
        if(flagm == 1 && flage == 1 && flago == 1 && flagw == 1 && n>3 && l==n) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}