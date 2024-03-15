#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int freq[n+1] = {0};

    for(int i=0; i<=n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for(int i=1; i<=n; i++) {
        if(freq[i]==0) {
            cout << i << endl;
            break;
        } 
    }
    return 0;
}