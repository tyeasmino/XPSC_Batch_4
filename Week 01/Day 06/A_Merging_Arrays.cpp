#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m], c[n+m];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int l=0, r=0, k=0;
    while (r < m || l < n)  {
        if(r==m || l<n && a[l] < b[r]) {
            c[k] = a[l];
            l++;
            k++;
        }
        else {
            c[k] = b[r];
            r++;
            k++;
        }
    }

    for(int i=0; i<n+m; i++) {
        cout << c[i] << " ";
    }
    return 0;
}