#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n+m];

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> a[n+i];
    
    sort(a, a+n+m);
    for(int i=0; i<n+m; i++) 
        cout << a[i] << " ";   
    
    return 0; 
}