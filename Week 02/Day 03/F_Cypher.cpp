/* created: 2024-03-23 23:37:12 */
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
        int a[n];

        for(int i=0; i<n; i++) cin >> a[i];
        
        for(int i=0; i<n; i++) {
            int x;
            char c;
            cin >> x;
            
            int now = a[i];
            for(int j=0; j<x; j++) {
                cin >> c;
                if(c == 'D') {
                    if(now == 9) {
                        now = 0;
                    } else {
                        now++;
                    }
                } else if(c == 'U') {
                    if(now == 0) {
                        now = 9;
                    } else {
                        now--;
                    }
                }
            } 
            cout << now << " ";
        }
        cout << endl;
    }
    
    return 0;
}