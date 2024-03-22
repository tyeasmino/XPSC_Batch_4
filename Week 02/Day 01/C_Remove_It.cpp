/* created: 2024-03-22 14:58:52 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x != k) cout << x << " ";
    }
    return 0;
}