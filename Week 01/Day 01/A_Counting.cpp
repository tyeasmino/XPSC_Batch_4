#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int result = m-n+1;

    if(result < 0) cout << 0;
    else cout << result;
    return 0;
}