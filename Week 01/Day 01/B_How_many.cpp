#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, cnt=0;
    cin >> s >> t;

    for(int a=0; a<=s; a++) {
        for(int b=0; b<=s; b++) {
            if(a+b<=s) {
                for(int c=0; c<=s; c++) {
                    if(a+b+c <=s && a * b * c <= t) cnt++;
                }
            }            
        }
    }

    cout << cnt;
    return 0;
}