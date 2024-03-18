#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, need=0;
        cin >> n;
        for(int i=1; i<=n; i++) {
            cin >> x;
            if(x > i+need) {
                need += x-i-need;
            } 
        }

        cout << need << endl;
    }
    
    return 0;
}