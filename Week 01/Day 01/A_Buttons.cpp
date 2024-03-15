#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b; 
    
    if(a > b) {
        sum = sum + a;
        a--;
        if(a > b) {
            sum = sum + a;
        } else {
            sum = sum + b;
        }
    } else if(b > a) {
        sum = sum + b;
        b--;
        if(a > b) {
            sum = sum + a;
        } else {
            sum = sum + b;
        }
    } else {
        sum = a + b;
    }

    cout << sum; 
    return 0;
}