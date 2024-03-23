/* created: 2024-03-23 21:33:36 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b == c) cout << "+" << endl;
        else if(a - b == c) cout << "-" << endl;
    }
    
    return 0;
}