#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;

    long long i=1;
    while (n <= m)
    {
        n = n*2; 
        i++;
    }
    cout << i-1;
    return 0;
}