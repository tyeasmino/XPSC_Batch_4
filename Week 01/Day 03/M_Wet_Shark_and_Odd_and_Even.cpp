#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    long long int sum = 0;
    for(int i=0; i<n; i++) {
        int x; 
        cin >> x;
        a[i] = x;

        sum += x; 
    }

    if(sum % 2 == 0) cout << sum; 
    else {
        sort(a.begin(), a.end());

        int minOdd; 
        for(int i=0; i<n; i++) {
           if(a[i] % 2 == 1) {
                minOdd = a[i];
                break;
           }
        }
        sum = sum - minOdd;
        cout << sum;
    }    
    return 0;
}