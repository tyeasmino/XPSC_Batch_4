#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    int minimum = b / c;
    long long int result = minimum * c;

    if(a <= result) cout << result; 
    else cout << -1;
    
    return 0;
}